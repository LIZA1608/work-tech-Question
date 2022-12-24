/*https://workat.tech/problem-solving/practice/is-binary-tree-bst*/

bool check(Node* root,int min,int max){
	if(root==NULL){
		return true;
	}
	if(root->data>=min && root->data<=max){
		bool left=check(root->left,min,root->data);
		bool right=check(root->right,root->data,max);
		return left&&right;
	}
	return false;
}
bool isBst(Node* root) {
    // add your logic here
	return check(root,INT_MIN,INT_MAX);
}
