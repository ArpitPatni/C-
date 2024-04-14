#include<iostream>
#include<queue>
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
  void levelOrder(Node* root) {
        
        if(root==NULL) return;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
            for(int i=0;i<size;i++){
                Node*temp=q.front();
                q.pop();
                cout<<temp->data<<" ";
                // level.push_back(temp->data);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            cout<<endl;

        }
    }
Node*insertIntoBST(Node*root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data<root->data){
        //insert in left
        root->left=insertIntoBST(root->left,data);
    }else{
        //insert in right
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}
void takeInput(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }
}
Node* BSTUsingInorder(int inorder[],int s,int e){
    if(s>e){ 
        return NULL;
    }
    int mid=(s+e)/2;
    int element=inorder[mid];
    Node*root=new Node(element);
    root->left=BSTUsingInorder(inorder,s,mid-1);
    root->right=BSTUsingInorder(inorder,mid+1,e);
    return root;
}
int main(){

int inorder[]={1,2,3,4,5,6,7,8,9};
int s=0;
int e=8;
    Node *root=BSTUsingInorder(inorder,s,e);
    levelOrder(root);
}