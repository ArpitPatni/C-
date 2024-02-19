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
void insertAtTail(Node *&head, Node *tail, int data)
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
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);

    // insertAtTail(head, tail, 10);

    print(head);
    return 0;
}
