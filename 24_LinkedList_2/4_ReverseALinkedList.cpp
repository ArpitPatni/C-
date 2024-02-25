#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    // step 1 create a new node

    Node *newNode = new Node(data);
    // Step 2tail to this newNode;
    tail->next = newNode;

    // Update the tail to the end
    tail = newNode;
}
void insertAtHead(Node *&head, Node *&tail, int data)
{
    if(head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    // step 1 create a new node
    Node *newNode = new Node(data);

    // point the newNode to the head node;
    newNode->next = head;
 
    // update the head pointer to the start
    head = newNode;
}
Node* reverseUsingRecursion(Node*  &prev,Node* &curr){
    if(curr==NULL){
        return prev;
    }

    //1 case solve baaki recursive call;
    Node*forwardNode=curr->next;
    curr->next=prev;
    return reverseUsingRecursion(curr,forwardNode);
}

Node* reverseUsingLoop(Node*head){
    Node* prev=NULL;
    Node*curr=head;
    while(curr!=NULL){
        Node*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    // insertAtHead(head,tail,20);
    // insertAtHead(head,tail,30);
    // insertAtHead(head,tail,40);
    // insertAtHead(head,tail,50);
    // insertAtHead(head,tail,60);

    insertAtTail(head, tail, 90);
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 77);

    print(head);
    Node* prev=NULL;
    Node* curr=head;
    head=reverseUsingLoop(head);
    cout<<endl;
    print(head);
    cout<<endl;
    return 0;
}
