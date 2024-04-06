#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

int findPosition(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

//build tree from inorder and preorder traverdal

Node* buildTreeFromPreorderInorder(int inorder[],int preorder[],int size,int preIndex,int inorderStart,int inorderEnd){
    //base case

    if(preIndex>=size || inorderStart>inorderEnd){
        return NULL;
    }
    //Step A
    int element=preorder[preIndex++];
    Node*root=new Node(element);
    int pos=findPosition(inorder,size,element);

    //Step B
    root->left=buildTreeFromPreorderInorder(inorder,preorder,size,preIndex,inorderStart,pos-1);
    //Step C
    root->right=buildTreeFromPreorderInorder(inorder,preorder,size,preIndex,pos+1,inorderEnd);
    return root;

}
int main(){

}