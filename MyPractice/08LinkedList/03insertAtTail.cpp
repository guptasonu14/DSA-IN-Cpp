#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

  

};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    
    //created a new node
    Node* node1 = new Node(10);
    
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;
   

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 20);
    insertAtTail(tail, 25);
    
    print(head);

   


    return 0;
}