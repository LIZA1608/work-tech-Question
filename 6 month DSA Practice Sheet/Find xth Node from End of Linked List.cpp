/*https://workat.tech/problem-solving/practice/find-xth-node-end-linked-list*/

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
ListNode* xthNodeFromEnd(ListNode* head, int x) {
	int totalLength = 0;
	ListNode *currentNode = head;
	while (currentNode != NULL) {
		currentNode = currentNode->next;
		totalLength++;
	}
	x = totalLength - x;
	currentNode = head;
	int i = 0;
	while(i < x) {
		i++;
	    currentNode = currentNode->next;
	}
	return currentNode;
}
