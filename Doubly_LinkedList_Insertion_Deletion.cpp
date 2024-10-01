// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        
    Node(int data)
    {
      this->data=data;
      this->next=NULL;
      this->prev=NULL;
      
     }
  
};

void insertAtTail(Node* &tail,int data){
    Node* Nod=new Node(data);
    tail->next=Nod;
    Nod->prev=tail;
    tail=Nod;
}

void insertAtHead(Node* &head,int data){
    Node* temp= new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    
}

void printDL(Node* head){
    Node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
   
}

void printDlFromTail(Node* tail){
    Node* temp=tail;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
        
    }
   
}

void insertAtMiddle(Node* head,int data,int pos){
    Node* temp=new Node(data);
    Node* previous=NULL;
    Node* current=head;
    int count=1;
    while(count<pos)
    {
         previous=current;
         current=current->next;
         count++;
    }
    previous->next=temp;
    temp->prev=previous;
    temp->next=current;
    current->prev=temp;
}
int lengthOfDl(Node* head){
    Node* temp=head;
    int count = 1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
    
}

void deleteByPosition(Node* &head,int pos){
    if (pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    
    else{
        Node* previous=NULL;
        Node* current=head;
        int count=1;
        while(count<pos && current->next!=NULL)
        {
            previous=current;
            current=current->next;
            count++;
        }
        Node* currentNext=current->next;
        previous->next=current->next;
        currentNext->prev=previous;
        current->next=NULL;
        current->prev=NULL;
        delete current;
    }
}

int main() {
    Node* node= new Node(4);
    Node* head=node;
    Node* tail= node;
    insertAtHead(head,19);
    insertAtHead(head,43);
    insertAtHead(head,343);
    insertAtHead(head,53);
    insertAtTail(tail,232);
    insertAtTail(tail,3433);
    insertAtTail(tail,89);
    insertAtMiddle(head,99,3);
    cout<<"Before deletion :";
    printDL(head);
    cout<<endl;
    deleteByPosition(head,1);
    cout<<"After deletion :";
    printDL(head);
    cout<<endl<<"head : "<<head->data<<" "<<"tail : "<<tail->data<<endl;
    cout<<"Length:"<<lengthOfDl(head)<<endl;
    cout<<"traversal from tail : ";
    printDlFromTail(tail);
    return 0;
}
