/*https://workat.tech/problem-solving/practice/kth-largest-element-bst*/

/* This is the Node class definition

class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node(int data) {
        this->left = NULL;
        this->right = NULL;
        this->data = data;
    }
};
*/
int solve(Node* root,int &i,int k){
	Node* temp=root;
	while(temp!=NULL){
		temp=temp->left;
		
	}
	if(root==NULL){
		return -1;
	}
	int right=solve(root->right,i,k);
	if(right!=-1){
		return right;
	}
	i++;
	if(i==k){
		return root->data;
	}
	return solve(root->left,i,k);
}
int findKthLargest(Node* root, int k) {
    // add your logic here
	int i=0;
	int ans=solve(root,i,k);
	return ans;
}
