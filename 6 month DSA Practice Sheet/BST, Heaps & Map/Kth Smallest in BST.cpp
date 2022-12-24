/*https://workat.tech/problem-solving/practice/kth-smallest-element-bst*/

int solve(Node* root,int &i,int k){
	if(root==NULL){
		return -1;
	}
	int left=solve(root->left,i,k);
	if(left!=-1){
		return left;
	}
	i++;
	if(i==k){
		return root->data;
	}
	return solve(root->right,i,k);
}
int findKthSmallest(Node* root, int k) {
    // add your logic here
	int i=0;
	int ans=solve(root,i,k);
	return ans;
}
