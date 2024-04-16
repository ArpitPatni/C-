void convertToDLL(TreeNode<int>*root,TreeNode<int>*&head){
    if(root==NULL) return ;
    convertToDLL(root->right,head);
    root->right=head;
    if(head!=NULL){
        head->left=root;
    }
    head=root;
    convertToDLL(root->left,head);
}
TreeNode<int>* bstToSortedDLL(TreeNode<int> *root)
{
	// Write your code here.
    TreeNode<int>* head = NULL;
    convertToDLL(root, head);
    return head;
}