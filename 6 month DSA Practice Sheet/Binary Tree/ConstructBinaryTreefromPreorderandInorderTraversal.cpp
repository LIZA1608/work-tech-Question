/*https://workat.tech/problem-solving/practice/construct-binary-tree-from-preorder-and-inorder-traversal*/

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
int findpos(vector<int>in,int ele,int n){
	for(int i=0;i<n;i++){
		if(in[i]==ele){
			return i;
		}
	}
	return -1;
}
Node* constructTreeutil(vector<int>pre,vector<int>in,int &preorderindex,int inorderstart,int inorderend,int n){
	if(inorderend>=n || inorderstart>inorderend){
		return NULL;
	}
	int currelement=pre[preorderindex];
	preorderindex++;
	Node* root=new Node(currelement);
	int pos=findpos(in,currelement,n);
	root->left=constructTreeutil(pre,in,preorderindex,inorderstart,pos-1,n);
	root->right=constructTreeutil(pre,in,preorderindex,pos+1,inorderend,n);
	return root;
}

Node* constructTree(vector<int> &preorder, vector<int> &inorder) {
    // add your logic here
	int preorderindex=0;
Node*ans=constructTreeutil(preorder,inorder,preorderindex,0,inorder.size()-1,inorder.size());
	return ans;
}
