/*https://workat.tech/problem-solving/practice/delete-node-linked-list*/

/* This is the ListNode class definition

class ListNode {
public:
	int data;
	ListNode* next;

	ListNode(int data) {
		this->data = data;
		this->next = NULL;
	}
};
*/

void deleteNode(ListNode* node) {
    // add your logic here
	
	ListNode* nextNode=node->next;
	node->data=nextNode->data;
	node->next=nextNode->next;
}
