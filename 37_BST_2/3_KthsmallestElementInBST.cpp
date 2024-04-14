class Solution {
public:
   
    int kthSmallest(TreeNode* root, int &k) {
        //here we are just following inorder approaching traversing toe ach node and decrementing the value of k
       if(root==NULL){
        return -1;
       }
        int leftKaAns=kthSmallest(root->left,k);
        if(leftKaAns!=-1){
            return leftKaAns;
        }
        k--;
        if(k==0){
            return root->val;
        }
        int rightKaAns=kthSmallest(root->right,k);
        return rightKaAns;
       
    }
};