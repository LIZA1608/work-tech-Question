/*https://workat.tech/problem-solving/practice/delete-xth-node-end-linked-list*/

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

ListNode* removeXthNodeFromEnd(ListNode* head, int x) {
	// add your logic here
	ListNode* slow=head;
	ListNode * fast=head;
	for(int i=1;i<x;i++){
		fast=fast->next;
	}
	if(fast->next==NULL){
		return head->next;
	}
	while(fast->next!=NULL && fast->next->next!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	slow->next=slow->next->next;
	return head;
}
