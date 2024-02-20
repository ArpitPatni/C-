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
void insertAtTail(Node *&head, Node * &tail, int data)
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

int findLengthOfLinkedList(Node *head){
    int len=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtPosition(Node * &head,Node* &tail,int position,int data){
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }
    int len=findLengthOfLinkedList(head);

    if(position>=len){
        insertAtTail(head,tail,data);
        tail = tail->next;
        return;
    }

    //step 1 maintain a current and prev node
    int i=1;
    Node* prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;
    }
    Node*curr=prev->next;

    //Step 2 create a new node
    Node* newNode=new Node(data);

    //step 3
    newNode->next=curr;

    //step 4
    prev->next=newNode;

}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);

    insertAtTail(head, tail, 77);
        print(head);
        cout<<endl;
    insertAtPosition(head,tail,3,101);
        print(head);
        cout<<endl;
    return 0;
}
