/*https://workat.tech/problem-solving/practice/identical-binary-trees*/

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

bool areIdenticalTrees(Node* root1, Node* root2) {
    // add logic here
	if(root1==NULL &&root2==NULL){
		return true;
	}
	if(root1==NULL || root2==NULL){
		return false;
	}

		if(root1->data!=root2->data){
			return false;
		}
	if(areIdenticalTrees(root1->left,root2->left)==false ||areIdenticalTrees(root1->right,root2->right)==false){
		return false;
	}
	
	return true;
}
