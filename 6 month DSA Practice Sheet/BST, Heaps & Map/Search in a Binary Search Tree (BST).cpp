/*https://workat.tech/problem-solving/practice/search-in-a-binary-search-tree*/


Node* searchBst(Node* root, int key) {
    // add your logic here
	Node *temp=root;
	while(temp!=NULL){
		if(temp->data==key){
			return temp;
		}
	 else if(key<temp->data){
		 temp=temp->left;
	 }
		else{
			temp=temp->right;
		}
	}
	return temp;
}
