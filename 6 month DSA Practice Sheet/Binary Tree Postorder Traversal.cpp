/*https://workat.tech/problem-solving/practice/binary-tree-postorder-traversal*/
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
void getPostorderTraversalutil(Node* root,vector<int>&ans){
	if(root ==NULL){
		return;
	}
	getPostorderTraversalutil(root->left,ans);
	getPostorderTraversalutil(root->right,ans);
	ans.push_back(root->data);
}
vector<int> getPostorderTraversal(Node* root) {
    // add your logic here
	vector<int>ans;
	getPostorderTraversalutil(root,ans);
	return ans;
}
