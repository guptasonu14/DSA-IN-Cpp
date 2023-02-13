//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructure
    Node(int data){
        this -> data =data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
    if(head== NULL){
         cout << "List is empty "<< endl;
        return ;
    }
     Node* temp = head;

     while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
     }
     cout << endl;
}

int main(){
    Node* node1 = new Node(5);

    //head pointed to node1
    Node* head = node1;

    insertAtHead(head, 15);
    insertAtHead(head, 20);
    insertAtHead(head, 25);
    insertAtHead(head, 30);

    print(head);

     return 0;
}