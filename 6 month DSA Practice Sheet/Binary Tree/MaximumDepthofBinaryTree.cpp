/*https://workat.tech/problem-solving/practice/maximum-depth-of-binary-tree*/

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
int getMaxDepth(Node* root) {
	if(root==NULL){
		return 0;
	}
    // add your logic here
int x=getMaxDepth(root->left);
	int y=getMaxDepth(root->right);
	int ans=max(x,y)+1;
	return ans;
}
