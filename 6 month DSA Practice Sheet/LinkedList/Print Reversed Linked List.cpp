/*https://workat.tech/problem-solving/practice/print-reversed-linked-list*/

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

void printLinkedListReverse (ListNode* head) {
 if(head->next!=NULL){
	 printLinkedListReverse(head->next);
 } 
	cout<<head->data<<" ";
}
