/*https://workat.tech/problem-solving/practice/append-linked-lists*/

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

ListNode* appendLists (ListNode* list1, ListNode* list2) {
    ListNode* currentNode = list1;
	while (currentNode->next != NULL) {
		currentNode = currentNode->next;
	}
	currentNode->next = list2;
	return list1;
}
