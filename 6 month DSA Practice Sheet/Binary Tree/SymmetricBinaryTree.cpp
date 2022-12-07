/*https://workat.tech/problem-solving/practice/symmetric-binary-tree*/

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
bool isMirror(Node* first,Node* second){
	if(first==NULL && second==NULL){
		return true;
	}
	if(first==NULL || second==NULL){
		return false;
	}
	if(first->data!=second->data){
		return false;
	}
	if(isMirror(first->left,second->right)==false ||isMirror(first->right,second->left)==false){
		return false;
	}
	return true;
}
bool isSymmetric(Node* root) {
    // add your loggic here
	return isMirror(root,root);
}
