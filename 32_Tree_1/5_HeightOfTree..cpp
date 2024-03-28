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
int height(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int ans=max(leftHeight,rightHeight)+1;
    return ans;
}

int main(){
    Node*root=NULL;
    root=buildTree();
}