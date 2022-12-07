/*https://workat.tech/problem-solving/practice/balanced-binary-tree*/

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

int getdepth(Node *root,bool &c){
	if(root==NULL){
		return 0;
	}
	int x=getdepth(root->left,c);
	int y=getdepth(root->right,c);
	if(abs(x-y)>1){
		c=false;
	}
	return max(x,y)+1;
}
bool isBinaryTreeBalanced(Node* root) {
    // add your logic here
	bool c=true;
	getdepth(root,c);
	return c;
}
