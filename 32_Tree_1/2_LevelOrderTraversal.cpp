#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node*right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* buildTree(){
    int data;
    cout<<"Input the data"<<endl;
    cin>>data;
    //base case
    if(data==-1){
        return NULL;
    }
    //steps A,B,C
    Node *root=new Node(data);
    cout<<"Enter data for left part "<<data<<" node "<<endl;
    root->left=buildTree();
    cout<<"Enter data for right part "<<data<<" node "<<endl;
    root->right=buildTree();
    return root;
}

void levelorderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //A
        Node*temp=q.front();
        //B
        q.pop();
    if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }else{
           //C
        cout<<temp->data<<" ";
        //D
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
     

    }
}
int main(){
    Node*root=NULL;
    root=buildTree();

    levelorderTraversal(root);
}