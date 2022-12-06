/*https://workat.tech/problem-solving/practice/remove-duplicates-sorted-linked-list*/

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
ListNode* removeDuplicates(ListNode* head) {
	ListNode* currentNode=head;
	while(currentNode!=NULL && currentNode->next!=NULL){
		while(currentNode->next!=NULL && currentNode->data==currentNode-> next->data){
			currentNode->next=currentNode->next->next;
		}
		currentNode=currentNode->next;
	}
	return head;
}
