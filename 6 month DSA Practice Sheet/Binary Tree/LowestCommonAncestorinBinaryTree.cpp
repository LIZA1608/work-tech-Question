/*https://workat.tech/problem-solving/practice/lowest-common-ancestor*/


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

Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    // add your logic here
	if(root==NULL){
		return NULL;
	}
	if(root->data==p->data || root->data==q->data){
		return root;
	}
	Node* leftans=lowestCommonAncestor(root->left,p,q);
	Node* rightans=lowestCommonAncestor(root->right,p,q);
	if(leftans!=NULL && rightans!=NULL){
		return root;
	}
	else if(leftans!=NULL && rightans==NULL){
		return leftans;
	}
	else if(leftans==NULL && rightans!=NULL){
		return rightans;
	}
	else{
		return NULL;
	}
}
