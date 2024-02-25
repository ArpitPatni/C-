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
    while(head!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
int main(){

}