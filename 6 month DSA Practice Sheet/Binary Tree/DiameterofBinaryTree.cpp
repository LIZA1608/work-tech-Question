/*https://workat.tech/problem-solving/practice/diameter-of-binary-tree*/

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

int getmax(Node* root,int &d){
	if(root==NULL){
		return 0;
	}
	int x=getmax(root->left,d);
	int y=getmax(root->right,d);
	d=max(d,x+y);
	return max(x,y)+1;
}
int getDiameter(Node* root) {
    // add your logic here
	int dia=0;
 getmax(root,dia);
	return dia;
}
