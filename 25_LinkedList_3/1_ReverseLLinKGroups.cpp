#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
        cout<<"Hello"<<endl;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print(Node * &head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
}
int getLength(Node * head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
Node* reverseKNodes(Node* head,int k){
    if(head==NULL){
        return NULL;
    }

    int len=getLength(head);
    if(k>len){
        return head;
    }

    //Step 1 Reverse first k nodes of LL

    Node*prev=NULL;
    Node*curr=head;
    Node*forward=curr->next;
    int count=0;
    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }

    if(forward!=NULL){
        head->next=reverseKNodes(forward,k);
    }
    return prev;
}
int main(){
    Node*head=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*fourth=new Node(40);
    Node*fifth=new Node(50);
    Node*sixth=new Node(60);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    print(head);
    cout<<endl;
    head=reverseKNodes(head,7);
    print(head);



}