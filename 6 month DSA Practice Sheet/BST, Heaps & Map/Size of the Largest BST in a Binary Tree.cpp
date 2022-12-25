/*https://workat.tech/problem-solving/practice/size-of-largest-bst-in-binary-tree*/


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
class info{
	public:
	int maxi;
	int mini;
	bool isBST;
	int size;
};
info solve(Node* root,int &ans){
	if(root==NULL){
		return{INT_MIN,INT_MAX,true,0};
	}
	info left=solve(root->left,ans);
	info right=solve(root->right,ans);
	info currNode;
	currNode.size=left.size+right.size+1;
	currNode.maxi=max(root->data,right.maxi);
	currNode.mini=min(root->data,left.mini);
	if(left.isBST && right.isBST &&(root->data>left.maxi&& root->data<right.mini)){
		currNode.isBST=true;
	}
	else{
		currNode.isBST=false;
	}
	if(currNode.isBST){
		ans=max(ans,currNode.size);
	}
	return currNode;
	
}
int getLargestBstSize(Node* root) {
    // add your logic here
	int maxSize=0;
	info temp=solve(root,maxSize);
	return maxSize;
}
