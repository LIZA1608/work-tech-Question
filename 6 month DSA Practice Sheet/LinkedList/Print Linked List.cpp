/*https://workat.tech/problem-solving/practice/print-linked-list*/

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

void printLinkedList (ListNode* head) {
    // add your logic here
	ListNode* currentNode=head;
	while(currentNode!=NULL){
		cout<<currentNode->data<<" ";
		currentNode=currentNode->next;
	}
	return;
}
