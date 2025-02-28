#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

Node* InsertAtHead(int value,Node* &head,Node* &tail){
    if ( head == NULL && tail == NULL){
    Node* NewNode = new Node(value);
    head = NewNode;
    tail = NewNode; 
    }
   else { 
    Node* NewNode = new Node (value);
    NewNode ->next = head;
    head =NewNode;
   }
   return head;
}

// Node* InsertAtTail(int value,Node* &head,Node* &tail){
void InsertAtTail(int value,Node* &head,Node* &tail){
    if ( head == NULL && tail == NULL){
        Node* NewNode =  new Node(value);
        head = NewNode;
        tail = NewNode;
    }
else {
    Node* NewNode = new Node(value);
    tail -> next = NewNode;
    tail = NewNode;
}
//return head;
}
void print (Node* head){
    Node* temp = head;
    while ( temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
cout <<"NULL"<< endl;
}

int getlength(Node* head){
    int length =0;
    Node* temp =head;
    while ( temp != NULL){
        temp = temp -> next ;
        length ++;
    }
    return length ;
}

void insertAtPosition( int position ,int value ,Node* &head,Node* &tail){
    int length = getlength(head);

    if ( position == 1)
    head = InsertAtHead(value,head,tail);
else if(position == length +1)
    InsertAtTail( value ,head,tail);
 else {
    Node* temp = head;
    for ( int i=1;i<position - 1;i++){
        temp = temp -> next;
    }
    Node* newNode = new Node(value);
    newNode -> next = temp -> next;
    temp -> next = newNode;
     }   
}

bool searchLL ( int target ,Node* head){
    Node* temp = head;
    int pos =0;
    while ( temp != NULL){
        pos ++;
    if (temp -> data == target){
        cout << pos<< endl;
            return true;
        }
        temp = temp -> next;
    }
    return false;
}
void deleteNodefromLL(int position,Node* &head,Node* &tail){
    if ( head == NULL && tail == NULL){
        cout<< " no node to delete"<< endl;
        return;
    }
    if ( head==tail){
        //single node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp; 
         return;
    }
    else {
        if ( position == 1){
            Node* temp = head;
            head = temp -> next ;
            temp -> next = NULL;
            delete temp ;
        }
        else {
            Node* prev = head;
            for ( int i=0; i< position -2;i++){
                prev = prev -> next;
            }
            Node* curr = prev -> next;
            Node* forward= curr -> next;
            prev -> next = forward ;
            curr -> next = NULL;
            delete curr;
        }
    }
}

int main (){

    // stack memory 
    //node* first;
    // dynamic memory 
   // Node* first = new Node(10);

  /*
   Node* head =NULL ;
   Node* tail =NULL ;
   head = InsertAtHead(10,head,tail);
   print ( head);
   head = InsertAtHead(20,head,tail);
   print ( head);
   head = InsertAtHead(30,head,tail);
   print ( head);
  */ 

 Node* head = NULL;
 Node* tail = NULL;
 InsertAtTail(101,head,tail);
 // head = InsertAtTail(101,head,tail);
 //print (head);
 InsertAtTail ( 102,head,tail);
// print (head);
 InsertAtTail ( 103 ,head,tail);

 insertAtPosition(1,69,head,tail);
 insertAtPosition(5,786,head,tail);
 insertAtPosition(3,88,head,tail);
 print (head);

 //cout << searchLL ( 103,head);
 deleteNodefromLL(1,head,tail);
 print (head);
 deleteNodefromLL(3,head,tail);
 print (head);
 deleteNodefromLL(4,head,tail);
 print (head);
    return 0;
}