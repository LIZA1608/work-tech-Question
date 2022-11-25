/*https://workat.tech/problem-solving/practice/reverse-linked-list*/

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

ListNode* reverseLinkedList (ListNode* head) {
    // add your logic here
	ListNode* currentnode =head;
	ListNode* prev=NULL;
	ListNode* nextNode =NULL;
	while(currentnode!=NULL){
		nextNode=currentnode->next;
		currentnode->next=prev;
		prev=currentnode;
		currentnode=nextNode;
	}
	head=prev;
	return head;
}
