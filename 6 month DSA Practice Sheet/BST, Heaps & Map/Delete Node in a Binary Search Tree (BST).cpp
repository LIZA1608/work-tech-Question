/*https://workat.tech/problem-solving/practice/delete-node-from-binary-search-tree*/


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
Node* minVal(Node *root){
	Node *temp=root;
	while(temp->left!=NULL){
		temp=temp->left;
	}
	
	return temp;
}

Node* removeFromBst(Node* root, int key) {
    // add your logic here
	if(root==NULL){
		return root;
	}
	if(root->data==key){
	if(root->left==NULL && root->right==NULL){
		delete root;
		return NULL;
	}
		if(root->left!=NULL && root->right==NULL){
			Node *temp=root->left;
			delete root;
			return temp;
		}
		if(root->left==NULL && root->right!=NULL){
			Node *temp=root->right;
			delete root;
			return temp;
		}
		if(root->left!=NULL && root->right!=NULL){
			int mini=minVal(root->right)->data;
			root->data=mini;
			root->right=removeFromBst(root->right,mini);
			return root;
		}
	}
	
	else if(root->data<key){
		root->right=removeFromBst(root->right,key);
		return root;
	}
	else{
		root->left=removeFromBst(root->left,key);
	    return root;
	}
	return root;
}
