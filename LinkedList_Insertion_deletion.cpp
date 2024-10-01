#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}

void printLL(Node* &head){
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtLast(Node* &head, int data){
    Node* anotherNode= new Node(data);
    Node* temp = head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=anotherNode;
    
    
}

void insertAtMiddle(Node* &head,int pos, int data){
    int count=1;
    Node* anotherNode=new Node(data);
    Node* temp=head;
    while(count!=(pos-1))
    {
        
        temp=temp->next;
        ++count;
    }
    
    anotherNode->next=temp->next;
    temp->next=anotherNode;
}

void deleteNode(Node* &head,int pos){
    if (pos==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        
    }
    else{
        Node* current = head;
        Node* previous=NULL;
        int count=1;
        while(count<pos)
        {
            previous=current;
            current=current->next;
            count++;
        }
        previous->next=current->next;
        current->next=NULL;
        delete current;
       
    }
}

void deleteByValue(Node* &head,int value){
    
    
}

int main() {
   
   Node* node = new Node(5);
   Node* head=node;
   
   insertAtHead(head,9);
   insertAtHead(head,39);
   insertAtHead(head,794);
   insertAtLast(head,88);
   insertAtLast(head,48);
   insertAtMiddle(head,4,90);
   printLL(head);
   
   deleteNode(head,1);
   printLL(head);
   
    return 0;
}
