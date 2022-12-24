/*https://workat.tech/problem-solving/practice/inorder-predecessor-bst*/

Node* findPredecessor(Node* root, Node* p) {
    // add your logic here
	Node *pred=NULL;
	while(root!=NULL){
		if(root->data>=p->data){
			root=root->left;
		}
		else{
				pred=root;
			root=root->right;
		}
	}
	return pred;
}
