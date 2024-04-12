bool findNode(Node*root,int target){
    if(root==NULL){
        return false;
    }
    if(root->data==target){
        return true;
    }
    if(target>root->data){
        return findNode(root->right,target);
    }else{
        return findNode(root->left,target);
    }
}