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
Node* reverseUsingLoop(Node*head){
    Node* prev=NULL;
    Node*curr=head;
    while(curr!=NULL){
        Node*forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool checkPalindrome(Node * & head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return true;
    }
    if(head->next==NULL){
        return true;
    }

    Node *slow=head;
    Node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    //after coming out of loop my slow pointer is pointing to middle node
    Node* reverseLLkaHead=reverseUsingLoop(slow->next);
    slow->next=reverseLLkaHead;

    //start comparsion;
    Node*temp1=head;
    Node*temp2=reverseLLkaHead;
    while(temp2!=NULL){
        if(temp1->data !=temp2->data){
            return false;
        }else{
        temp1=temp1->next;
        temp2=temp2->next;
        }
      
    }
    return true; 
}
int main(){
    Node*head=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*fourth=new Node(20);
    Node*fifth=new Node(10);
   
   

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
  
    bool isPalindrome=checkPalindrome(head);
    if(isPalindrome){
        cout<<"LL is palindrome"<<endl;
    }else{
        cout<<"LL is not palindrome"<<endl;
    }

    print(head);
    return 0;




}