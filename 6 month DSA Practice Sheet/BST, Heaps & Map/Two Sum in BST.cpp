/*https://workat.tech/problem-solving/practice/two-sum-binary-search-tree*/



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
void inorder(Node* root,vector<int>&in){
	if(root==NULL){
		return;
	}
	inorder(root->left,in);
	in.push_back(root->data);
	inorder(root->right,in);
}

bool pairExists(Node* root, int k) {
    // add your logic here
	vector<int> inorderVal;
	inorder(root,inorderVal);
	int i=0,j=inorderVal.size()-1;
	while(i<j){
		int sum=inorderVal[i]+inorderVal[j];
		if(sum==k){
			return true;
		}
		else if(sum>k){
			j--;
		}
		else{
			i++;
		}
	}
	return false;	
}
