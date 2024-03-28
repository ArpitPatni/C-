#include<iostream>
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
void inOrderTraversal(Node*root){
    if(root==NULL){
        return;
    }
    //LNR
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
void preOrderTraversal(Node*root){
    if(root==NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node*root){
    if(root==NULL){
        return;
    }
    //LRN
    
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node*root=NULL;
    root=buildTree();
}