Node* findSuccessor(Node* root, Node* p) {
    // add your logic here
	Node*succesor=0;
	Node*curr=root;
	while(curr){
		if(curr->data>p->data){
			succesor=curr;
			curr=curr->left;
		}else{
			curr=curr->right;
		}
	}
	return succesor;
}