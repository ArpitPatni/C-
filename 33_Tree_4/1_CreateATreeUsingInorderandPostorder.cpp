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

Node* buildTreeFromPreorderPostorder(int inorder[],int postorder[],int size,int &postIndex,int inorderStart,int inorderEnd){
    //base case

    if(postIndex<0 || inorderStart>inorderEnd){
        return NULL;
    }
    //Step A
    int element=postorder[postIndex];
    postIndex--;
    Node*root=new Node(element);
    int pos=findPosition(inorder,size,element);

    //Step B
    root->right=buildTreeFromPreorderPostorder(inorder,postorder,size,postIndex,pos+1,inorderEnd);
  
    //Step C
      root->left=buildTreeFromPreorderPostorder(inorder,postorder,size,postIndex,inorderStart,pos-1);
    return root;

}
int main(){

}