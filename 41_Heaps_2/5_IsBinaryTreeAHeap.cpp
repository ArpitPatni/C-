    int countNodes(struct Node*tree){
        if(tree==NULL){
            return 0;
        }
        int ans=1+countNodes(tree->left)+countNodes(tree->right);
        return ans;
    }
    bool isCBT(struct Node*tree,int index,int totalCount){
        if(tree==NULL) return true;
        if(index>=totalCount){
            return false;
        }else{
            bool leftKaAns=isCBT(tree->left,2*index+1,totalCount);
            bool rightKaAns=isCBT(tree->right,2*index+2,totalCount);
            return (leftKaAns && rightKaAns);
        }
    }
    bool isMaxOrder(struct Node*root){
        if(root->left ==NULL && root->right ==NULL ){
            return true;
        }
        if(root->right==NULL){
            return root->data>root->left->data;
        }else{
            return (root->data>root->left->data && root->data>root->right->data && isMaxOrder(root->left) && isMaxOrder(root->right));
        }
    }
    bool isHeap(struct Node* tree) {
        // code here
        int index=0;
        int totalCount=countNodes(tree);
        if(isCBT(tree,index,totalCount)&&isMaxOrder(tree)){
            return true;
        }else{
            return false;
        }
    }