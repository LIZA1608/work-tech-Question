/*https://workat.tech/problem-solving/practice/binary-tree-inorder-traversal*/

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
void getInorderTraversalutil(Node *root,vector<int>&ans){
	if(root==NULL){
		return;
	}
	getInorderTraversalutil(root->left,ans);
	ans.push_back(root->data);
	getInorderTraversalutil(root->right,ans);
}
vector<int> getInorderTraversal(Node* root) {
    // add your logic here
	vector<int>ans;
	getInorderTraversalutil(root,ans);
	return ans;
}
