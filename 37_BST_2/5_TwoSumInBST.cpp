//653. Two Sum IV - Input is a BST LEETCODE


class Solution {
public:
    void inorderTraversal(TreeNode*root,vector<int>&ans){
        if(root==NULL) return ;
        inorderTraversal(root->left,ans);
        ans.push_back(root->val);
        inorderTraversal(root->right,ans);
    }   
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        inorderTraversal(root,ans);
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]+ans[j]==k){
            return true;
        }
        if(ans[i]+ans[j]>k){
            j--;
        }
        if(ans[i]+ans[j]<k){
            i++;
        }
        }
        
        return false;
    }
};