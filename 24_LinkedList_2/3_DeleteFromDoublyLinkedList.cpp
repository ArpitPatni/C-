#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node(){
        cout<<this->data<<" is deleted"<<endl;
    }
};
void print(Node * &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int getLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtHead(Node* &head,Node* &tail,int data){
    //if the Linkedlist is empty
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    //if linkedlist is non empty

    //step 1 create a new node
    Node* newNode=new Node(data);
    //step 2 point the next of newnode to head
    newNode->next=head;
    //step 3 connect prev of head with newnode
    head->prev=newNode;
    //steo 4 update head
    head=newNode;
}
void insertAtTail(Node* &head,Node* & tail,int data){
    
    //if linkeldist is empty
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    //if linkedlist is non empty

    //step 1 create a newNode

    Node*newNode=new Node(data);

    //step 2 point the next of tail to newNode
    tail->next=newNode;

    //step 3 newNode  prev will point to tail
    newNode->prev=tail;

    //step 4 update tail
    tail=newNode;



}
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(head==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;  
    }
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    int len=getLength(head);
    if(position>len){
        insertAtTail(head,tail,data);
        return;
    }

    int i=1;
    Node*prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i++;
    }
    Node*curr=prevNode->next;

    Node*newNode=new Node(data);

    prevNode->next=newNode;
    newNode->prev=prevNode;
    
    newNode->next=curr;
    curr->prev=newNode;
    
}
void deleteFromPosition(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"Linked list is empty"<<endl;
    }
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(position==1){
        //want to delete the first node
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }

    int len=getLength(head);
    if(position>len){
        cout<<"Please enter a valid position"<<endl;
    }
    //deleting last node
    if(position==len){
        Node*temp=tail;
        //update tail 
        tail=temp->prev;
        tail->next=NULL;
        temp->prev=NULL;
        return;
    }

    //deleting middle node
    int i=1;
    Node*left=head;
    while(i<position-1){
        left=left->next;
        i++;
    }
    Node*curr=left->next;
    Node*right=curr->next;

    left->next=right;
    right->prev=left;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;   
}
int main(){

    Node*first=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*head=first;
    Node*tail=third;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    // print(head);
    // cout<<endl;
    insertAtHead(head,tail,101);
    // print(head);
    // cout<<endl;

    insertAtTail(head,tail,501);

    // print(head);
    // cout<<endl;
    insertAtPosition(head,tail,500,4);
    print(head);
    cout<<endl;
    deleteFromPosition(head,tail,4);
    print(head);
    cout<<endl;
}