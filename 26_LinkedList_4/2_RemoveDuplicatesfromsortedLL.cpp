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

void removeDuplicates(Node*&head){
        if(head==NULL){
            cout<<"LL is empty";
            return;
        }
        if(head->next==NULL){
            cout<<"Single node in LL"<<endl;
        }
        Node*curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->data==curr->next->data){
                Node*temp=curr->next;
                curr->next=curr->next->next;
                temp->next=NULL;
                delete temp;
            }else{
                curr=curr->next;
            }
        }
}

int main(){
    Node*head=new Node(1);
    Node*second=new Node(2);
    Node*third=new Node(2);
    Node*fourth=new Node(3);
    Node*fifth=new Node(4);
    Node*sixth=new Node(4);
   
   

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    cout<<"Input LL"<<endl;
    print(head);
    cout<<endl;
    cout<<"Output LL"<<endl;
    removeDuplicates(head);
    print(head);
    cout<<endl;
  





}