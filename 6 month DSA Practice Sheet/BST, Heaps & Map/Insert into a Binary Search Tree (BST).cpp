/*https://workat.tech/problem-solving/practice/insert-into-a-binary-search-tree*/

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

Node* insertBst(Node* root, int key) {
    // add your logic here
	if(root==NULL){
	root=new Node(key);
		return root;
	}
	if(key<root->data){
		root->left=insertBst(root->left,key);
	}
	else{
		root->right=insertBst(root->right,key);
	}
return root;
}
