
/*https://workat.tech/problem-solving/practice/inorder-successor-bst*/

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

Node* findSuccessor(Node* root, Node* p) {
    // add your logic here
	Node * succesor=NULL;
	while(root!=NULL){
		if(p->data>=root->data){
			root=root->right;
		}
		else{
			succesor=root;
			root=root->left;
		}
	}
	return succesor;
}
