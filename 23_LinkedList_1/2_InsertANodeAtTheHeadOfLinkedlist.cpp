#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node *head){
     Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}
void insertANode(Node* &head,int data){
    //step 1 create a new node
    Node * newNode=new Node(data);

    //point the newNode to the head node;
    newNode->next=head;
    //update the head pointer to the start
    head=newNode;
}
int main(){

    Node *head=new Node(10);

    insertANode(head,20);
    insertANode(head,30);
    insertANode(head,40);
    insertANode(head,50);

    print(head);
    return 0;
}
