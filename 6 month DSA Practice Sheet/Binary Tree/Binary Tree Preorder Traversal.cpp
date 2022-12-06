
/*https://workat.tech/problem-solving/practice/binary-tree-preorder-traversal*/

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
void getPreorderTraversalutil(Node *root,vector<int>&ans){
	if(root==NULL){
		return ;
	}
	
	ans.push_back(root->data);
	getPreorderTraversalutil(root->left,ans);
	getPreorderTraversalutil(root->right,ans);
}

vector<int> getPreorderTraversal(Node* root) {
    // add your logic here
	vector<int>ans;
	getPreorderTraversalutil(root,ans);
	return ans;
}
