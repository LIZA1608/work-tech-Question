/*https://workat.tech/problem-solving/practice/construct-binary-tree-from-inorder-and-postorder-traversal*/


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
Node *solve(vector<int>post,vector<int>in,int &postidx,int inorderstart,int inorderend,int n){
	if(inorderend<0 || inorderstart>inorderend){
		return NULL;
	}
	int ele=post[postidx];
	postidx--;
	Node* root=new Node(ele);
	int pos=findpos(in,ele,n);
	root->right=solve(post,in,postidx,pos+1,inorderend,n);
	root->left=solve(post,in,postidx,inorderstart,pos-1,n);
	return root;
}
Node* constructTree(vector<int> &postorder, vector<int> &inorder) {
    // add your logic here
	int postidx=inorder.size()-1;
Node*ans=solve(postorder,inorder,postidx,0,inorder.size()-1,inorder.size());
	return ans;
}
