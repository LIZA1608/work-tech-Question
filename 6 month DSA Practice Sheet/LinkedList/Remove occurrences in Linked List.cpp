/*https://workat.tech/problem-solving/practice/remove-occurences-linked-list*/

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
ListNode* removeOccurences(ListNode* head, int key) {
	// add your logic here
	while(head!=NULL && head->data==key){
		head=head->next;
	}
	ListNode* currentNode =head;
	while(currentNode!=NULL && currentNode->next!=NULL){
		if(currentNode->next->data==key){
			currentNode->next=currentNode->next->next;
		}
		else{
		currentNode=currentNode->next;
	}
	}
//	currentNode->next=currentNode->next->next;
	return head;
}
