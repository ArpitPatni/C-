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
int main(){
    Node*root=NULL;
    vector<vector<int>>ans;
    cout<<"Enter the data for node"<<endl;
    takeInput(root);
   cout<<"Printing the tree"<<endl;
    levelOrder(root);
}