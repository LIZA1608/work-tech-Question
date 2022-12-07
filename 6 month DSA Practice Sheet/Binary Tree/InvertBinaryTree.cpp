/*https://workat.tech/problem-solving/practice/invert-binary-tree*/

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
Node *invertTreeutil(Node *root){
	if(root==NULL){
		return root;
	}
	Node *left=invertTreeutil(root->left);
	Node *right=invertTreeutil(root->right);
	root->left=right;
	root->right=left;
 return root;
}
void invertTree(Node* root) {
    // add your logic here
	invertTreeutil(root);
}
