#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

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
void insertAtTail(Node *&tail, int data)
{
    // if(head==NULL){
    //     Node *newNode=new Node(data);
    //     head=newNode;
    //     tail=newNode;
    //     return;
    // }
    // step 1 create a new node

    Node *newNode = new Node(data);
    // Step 2tail to this newNode;
    tail->next = newNode;

    // Update the tail to the end
    tail = newNode;
}
void insertAtHead(Node *&head, int data)
{
    // step 1 create a new node
    Node *newNode = new Node(data);

    // point the newNode to the head node;
    newNode->next = head;
 
    // update the head pointer to the start
    head = newNode;
}

void insertAtPosition(Node * &head,Node* &tail,int position,int data){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node *temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    Node * newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
}
int main()
{
    Node * newNode=new Node(10);
    Node*head=newNode;
    Node*tail=newNode;

    // insertAtHead(head,20);
    // insertAtHead(head,30);
    // insertAtHead(head,40);
    // insertAtHead(head,50);

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtPosition(head,tail,4,22);
    print(head);
    return 0;
}
