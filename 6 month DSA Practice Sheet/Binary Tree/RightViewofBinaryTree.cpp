/*https://workat.tech/problem-solving/practice/right-view-binary-tree*/

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
void solve(Node* root,vector<int>&ans,int level){
	if(root==NULL){
		return;
	}
	if(level==ans.size()){
		ans.push_back(root->data);
	}
	solve(root->right,ans,level+1);
	solve(root->left,ans,level+1);
}
vector<int> rightView(Node* root) {
    // add your logic here
	vector<int>ans;
	solve(root,ans,0);
	return ans;
	
}
