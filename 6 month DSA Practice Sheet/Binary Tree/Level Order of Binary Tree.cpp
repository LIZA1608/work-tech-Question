/*https://workat.tech/problem-solving/practice/level-order-binary-tree*/

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

vector<int> getLevelOrderTraversal(Node* root) {
    // add your logic here
	queue<Node*>q;
	q.push(root);
	vector<int>trav;
	while(!q.empty()){
		Node *temp=q.front();
		q.pop();
			trav.push_back(temp->data);
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	return trav;
}
