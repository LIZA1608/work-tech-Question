/*https://workat.tech/problem-solving/practice/lowest-common-ancestor-bst*/

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
	if(root->data>p->data && root->data>q->data){
		return lowestCommonAncestor(root->left,p,q);
	}
	if(root->data<p->data && root->data<q->data){
		return lowestCommonAncestor(root->right,p,q);
}
	return root;
}
