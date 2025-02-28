#include <iostream>
using namespace std;
class Node {
    public: 
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int value , Node* &head,Node* &tail){
    if (head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else {
        Node* newNode = new Node( value);
        newNode -> next = head;
        head -> prev = newNode;
        head = newNode;

    }
}

void print ( Node* head){

    Node* temp = head;
    while( temp != NULL){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
    cout << " NULL "<< endl;
}

void printReverse(Node* tail){
    Node* temp = tail;
    cout << " NULL ";
    while( temp != NULL){
        cout << "<- "<<temp -> data;
        temp = temp -> prev;
    }
}

void insertAtTail(int value,Node* &head,Node* &tail){
    if ( head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else {
        Node* newNode = new Node(value);
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while ( temp != NULL){
    count++;       
    temp = temp -> next;
    }
    return count;
}

void insertAtPosition ( int position,int value,Node* &head,Node* &tail){
    int length = getLength(head);
    if ( position == 1)
    insertAtHead(value ,head,tail);
    
    else if (position == length+1 )
    insertAtTail(value,head,tail);

    else {
        Node* temp =head ;
        for ( int i=0;i<position -2;i++){
            temp = temp -> next;
        }
        Node* newNode = new Node(value);
        Node* forward = temp -> next;
        temp -> next = newNode;
        newNode -> prev = temp ;
        newNode -> next = forward;
        forward -> prev = newNode; 
         }
    }

    bool searchElement(int target,Node* head){
        Node* temp = head;
        while ( temp != NULL){
            if ( temp -> data == target )
            return true;
            temp = temp -> next;
        }
        return false;
    }

    void deleteFromPosition ( int position,Node* &head,Node* &tail){
        int length = getLength ( head); 
        if ( head==NULL && tail == NULL){
            cout << " no nodes to delete"<< endl;
            return;
        }
        else if ( head == tail ){
            Node* temp = head;
            head = NULL;
            tail = NULL ;
            delete temp ;
        }
        else if ( position == 1){
            Node* temp = head ;
            head = head -> next;
            head -> prev = NULL;
            temp -> next = NULL;
            delete temp;
        }
        else if ( position == length){
            Node* temp = tail ;
            tail = temp -> prev;
            tail -> next = NULL;
            temp -> prev = NULL;
            delete temp;
        }
        else {
            Node* backward = head;
            for ( int i=0 ;i<position-2;i++){
                backward = backward -> next;
            }
            Node* current = backward -> next;
            Node* forward = current -> next;
            backward -> next = forward ;
            forward -> prev = backward;
            current -> next = NULL;
            current -> prev = NULL;
            delete current;
        }
    }

    int main ( ){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead( 10, head,tail);
    insertAtHead( 20,head,tail);
    insertAtHead( 30 ,head,tail);

    //print ( head);

    insertAtTail( 0,head,tail);
    insertAtTail(-10,head,tail);
    insertAtTail(-20 ,head,tail);
    
    print ( head);
    //printReverse(tail);

   insertAtPosition(4,69,head,tail);
print ( head);

deleteFromPosition(7,head,tail);
print ( head);
    return 0;
}