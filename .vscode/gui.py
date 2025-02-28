main.py:
import customtkinter as ctk
from tkinter import messagebox
import db
from crypt import classcrypt
import pyperclip
class PasswordManagerApp:
    def __init__(self, root):
        self.root = root
        self.database = None
        self.cryptography = classcrypt()
        ctk.set_appearance_mode("System")
        ctk.set_default_color_theme("green")
        self.root.title("Vaultify")
        self.root.geometry("500x500")
        self.ask_mariadb_credentials()  # Initialize the login frame
    def ask_mariadb_credentials(self):
        self.frame_login = ctk.CTkFrame(self.root)
        self.frame_login.pack(fill="both", expand=True)
        self.login_username_var = ctk.StringVar()
        self.login_password_var = ctk.StringVar()
        ctk.CTkLabel(self.frame_login, text="Login to MariaDB server").pack(pady=5)
        ctk.CTkLabel(self.frame_login, text="Enter MariaDB Username:").pack(pady=5)
        self.entry_username = ctk.CTkEntry(self.frame_login, textvariable=self.login_username_var)
        self.entry_username.pack(pady=5)
        ctk.CTkLabel(self.frame_login, text="Enter MariaDB Password:").pack(pady=5)
        self.entry_password = ctk.CTkEntry(self.frame_login, textvariable=self.login_password_var, show="*")
        self.entry_password.pack(pady=5)
        self.button_login = ctk.CTkButton(self.frame_login, text="Submit", command=self.check_mariadb_credentials)
        self.button_login.pack(pady=20)
    def check_mariadb_credentials(self):
        username = self.login_username_var.get()
        password = self.login_password_var.get()
        self.database = db.DBUtils(username, password)
        if self.database.connect():
            self.database.create_database()
            messagebox.showinfo("Successful!", "You successfully logged into your MariaDB server")
            self.frame_login.destroy()
            self.show_password_management()
        else:
            messagebox.showerror("Error", "Failed to connect to database")
    def show_password_management(self):
        self.frame_password_management = ctk.CTkFrame(self.root)
        self.frame_password_management.pack(fill="both", expand=True)
        ctk.CTkLabel(self.frame_password_management, text="Password Management").pack(pady=10)
        self.button_add_password = ctk.CTkButton(
            self.frame_password_management, text="Add Password", command=self.add_password
        )
        self.button_add_password.pack(pady=5)
        self.button_delete_password = ctk.CTkButton(
            self.frame_password_management, text="Delete Password", command=self.delete_password
        )
        self.button_delete_password.pack(pady=5)

        self.button_show_password = ctk.CTkButton(
            self.frame_password_management, text="Search a Password", command=self.show_searched_password
        )
        self.button_show_password.pack(pady=5)
    def add_password(self):
        self.frame_password_management.destroy()
        self.frame_add_password = ctk.CTkFrame(self.root)
        self.frame_add_password.pack(fill="both", expand=True)
        ctk.CTkLabel(self.frame_add_password, text="Add Password").pack(pady=10)
        self.add_service_var = ctk.StringVar()
        self.add_username_var = ctk.StringVar()
        self.add_password_var = ctk.StringVar()
        ctk.CTkLabel(self.frame_add_password, text="Service:").pack(pady=5)
        ctk.CTkEntry(self.frame_add_password, textvariable=self.add_service_var).pack(pady=5)
        ctk.CTkLabel(self.frame_add_password, text="Username:").pack(pady=5)
        ctk.CTkEntry(self.frame_add_password, textvariable=self.add_username_var).pack(pady=5)
        ctk.CTkLabel(self.frame_add_password, text="Password:").pack(pady=5)
        ctk.CTkEntry(self.frame_add_password, textvariable=self.add_password_var, show="*").pack(pady=5)
        ctk.CTkButton(self.frame_add_password, text="Save Password", command=self.save_password).pack(pady=20)
        ctk.CTkButton(self.frame_add_password, text="Back", command=self.back_to_password_management).pack(pady=5)
    def back_to_password_management(self):
        self.frame_add_password.destroy()
        self.show_password_management()
    def save_password(self):
        service = self.add_service_var.get()
        username = self.add_username_var.get()
        password = self.add_password_var.get()
        encrypted_password = self.cryptography.encrypt(password)
        self.database.add_password(service, username, encrypted_password)
        messagebox.showinfo("Success", "Password saved successfully!")
    def delete_password(self):
        self.frame_password_management.destroy()
        self.frame_delete_password = ctk.CTkFrame(self.root)
        self.frame_delete_password.pack(fill="both", expand=True)
        self.delete_service_var = ctk.StringVar()
        self.delete_username_var = ctk.StringVar()
        ctk.CTkLabel(self.frame_delete_password, text="Delete Password").pack(pady=10)
        ctk.CTkLabel(self.frame_delete_password, text="Enter service:").pack(pady=5)
        ctk.CTkEntry(self.frame_delete_password, textvariable=self.delete_service_var).pack(pady=5)
        ctk.CTkLabel(self.frame_delete_password, text="Username:").pack(pady=5)
        ctk.CTkEntry(self.frame_delete_password, textvariable=self.delete_username_var).pack(pady=5)
        ctk.CTkButton(self.frame_delete_password, text="Delete Password", command=self.delete_password_entry).pack(pady=10)
        ctk.CTkButton(self.frame_delete_password, text="Back", command=self.back_to_password_management_from_delete).pack(pady=5)
    def back_to_password_management_from_delete(self):
        self.frame_delete_password.destroy()
        self.show_password_management()
    def delete_password_entry(self):
        service = self.delete_service_var.get()
        username = self.delete_username_var.get()
        if self.database.delete_password(service, username):
            messagebox.showinfo("Success", "Password deleted successfully!")
        else:
            messagebox.showerror("Unsuccessful", "Failed to delete password.")

    def show_searched_password(self):
        self.frame_password_management.destroy()
        self.frame_search_password = ctk.CTkFrame(self.root)
        self.frame_search_password.pack(fill="both", expand=True)
        self.search_service_var = ctk.StringVar()
        ctk.CTkLabel(self.frame_search_password, text="Enter Service:").pack(pady=5)
        ctk.CTkEntry(self.frame_search_password, textvariable=self.search_service_var).pack(pady=5)
        self.search_username_var = ctk.StringVar()
        ctk.CTkLabel(self.frame_search_password, text="Enter Username:").pack(pady=5)
        ctk.CTkEntry(self.frame_search_password, textvariable=self.search_username_var).pack(pady=5)
        ctk.CTkButton(self.frame_search_password, text="Search Password", command=self.search_password_entry).pack(pady=10)
        ctk.CTkButton(self.frame_search_password, text="Back", command=self.back_to_password_management_from_search).pack(pady=5)
    def back_to_password_management_from_search(self):
        self.frame_search_password.destroy()
        self.show_password_management()
    def search_password_entry(self):
        service = self.search_service_var.get()
        username = self.search_username_var.get()
        result = self.database.search_password(service, username)
        if result:
            password = result[0]
            decrypted_password = self.cryptography.decrypt(password)
            messagebox.showinfo("Password", f"Password is: {decrypted_password}\nPassword copied to clipboard!")
            try:
                pyperclip.copy(decrypted_password)
            except pyperclip.PyperclipException:
                messagebox.showerror("Error", "Could not copy to clipboard.")
        else:
            messagebox.showerror("No Results", f"No password found for service '{service}' and username '{username}'")
if __name__ == "__main__":
    root = ctk.CTk()
    app = PasswordManagerApp(root)
    root.mainloop()
























db.py :
import mariadb
class DBUtils:
    def __init__(self, username=None, password=None, existing_connection=None):
        self.username = username
        self.password = password
        self.cnx = existing_connection if existing_connection else None
        self.db_name = "password_manager"  # Default DB name
    def connect(self):
        if self.cnx:
            return True
        try:
            self.cnx = mariadb.connect(
                user=self.username, password=self.password, host="localhost"
            )
            return True
        except mariadb.Error as err:
            print(f"Error connecting to MariaDB server: {err}")
            return False
    def create_database(self):
        if self.cnx:
            try:
                cursor = self.cnx.cursor()
                cursor.execute(f"CREATE DATABASE IF NOT EXISTS {self.db_name}")
                cursor.execute(f"USE {self.db_name}")
                cursor.execute("""
                    CREATE TABLE IF NOT EXISTS passwords (
                        id INT AUTO_INCREMENT PRIMARY KEY,
                        service VARCHAR(255) NOT NULL,
                        username VARCHAR(255),
                        password VARCHAR(255)
                    )
                """)
                self.cnx.commit()
            except mariadb.Error as err:
                print(f"Error creating database: {err}")
            finally:
                cursor.close()
    def fetch_results(self, query, params=None):
        results = None
        if self.cnx:
            try:
                cursor = self.cnx.cursor()
                cursor.execute(f"USE {self.db_name}")
                cursor.execute(query, params or ())  
                if query.strip().upper().startswith("SELECT"):
                    results = cursor.fetchall()
                else:
                    self.cnx.commit()
            except mariadb.Error as err:
                print(f"Error executing query: {err}")
            finally:
                cursor.close()
        return results
    def close_connection(self):
        if self.cnx:
            self.cnx.close()
    def add_password(self, service, username, password):
        query = "INSERT INTO passwords (service, username, password) VALUES (?, ?, ?)"
        self.fetch_results(query, (service, username, password))
    def delete_password(self, service, username):
        """Delete a password entry by service and username from the database, return success status."""
        delete_query = "DELETE FROM passwords WHERE service = ? AND username = ?"
        try:
            cursor = self.cnx.cursor()
            cursor.execute(delete_query, (service, username))
            self.cnx.commit()
            rows_deleted = cursor.rowcount  # Check if a row was deleted
            cursor.close()
            return rows_deleted > 0  # Return True if successful, False if no match found
        except mariadb.Error as err:
            print(f"Error deleting password: {err}")
            return False 
    def search_password(self, service, username):
        """Search for a password entry by service and username."""
        search_query = "SELECT password FROM passwords WHERE service = ? AND username = ?"
        try:
            cursor = self.cnx.cursor()
            cursor.execute(search_query, (service, username))
            result = cursor.fetchone()  # Fetch a single matching result
            cursor.close()
            return result  # Returns a tuple (password,) or None if no result
        except mariadb.Error as err:
            print(f"Error searching password: {err}")
            return None




crypt.py :
from cryptography.fernet import Fernet
import os
class classcrypt:
    def __init__(self, key_file='secret.key'):
        self.key_file = key_file
        self.key = self.load_or_generate_key()
        self.cipher = Fernet(self.key)
    def load_or_generate_key(self):
        try:
            if os.path.exists(self.key_file):
                with open(self.key_file, 'rb') as file:
                    key = file.read()
            else:
                key = Fernet.generate_key()
                with open(self.key_file, 'wb') as file:
                    file.write(key)
            return key
        except IOError as e:
            print(f"Error accessing key file: {e}")
            raise
    def encrypt(self, plaintext):
        try:
            return self.cipher.encrypt(plaintext.encode())
        except Exception as e:
            print(f"Encryption error: {e}")
            raise
    def decrypt(self, encrypted_text):
        try:
            return self.cipher.decrypt(encrypted_text).decode()
        except Exception as e:
            print(f"Decryption error: {e}")
            raise
