void printRightView(TreeNode<int>*root,vector<int>&ans,int level){
    if(root==NULL){
        return;
    }
    if(level==ans.size()){
        ans.push_back(root->data);
    }
    //right call
    printRightView(root->right, ans, level+1);
    //left call
    printRightView(root->left, ans, level+1);
    
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ans;
    printRightView(root,ans,0);
    return ans;
}