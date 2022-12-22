/*https://workat.tech/problem-solving/practice/flatten-binary-tree-to-linked-list*

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

void flatten(Node* root) {
    // add your logic here
	Node* curr=root;
	while(curr!=NULL){
		
		if(curr->left){
			Node* pred=curr->left;
			while(pred->right){
				pred=pred->right;
			}
			pred->right=curr->right;
			curr->right=curr->left;
			curr->left=NULL;
		}
		curr=curr->right;
	}
}
