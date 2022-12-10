/*https://workat.tech/problem-solving/practice/zigzag-level-order-traversal*/

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

vector<int> zigzagLevelOrderTraversal(Node* root) {
    // add your logic here
	vector<int>ans;
	if(root==NULL){
		return ans;
	}
	bool lefttoright=true;
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		int size=q.size();
		vector<int>a(size);
		for(int i=0;i<size;i++){
			Node* frontNode=q.front();
			q.pop();
			int index;
			if(lefttoright){
				index=i;
			}
			else{
				index=size-i-1;
			}
			a[index]=frontNode->data;
			if(frontNode->left){
				q.push(frontNode->left);
			}
			if(frontNode->right){
				q.push(frontNode->right);
			}
		}
		lefttoright=!lefttoright;
		for(auto i:a){
			ans.push_back(i);
		}
	}
		return ans;
}
