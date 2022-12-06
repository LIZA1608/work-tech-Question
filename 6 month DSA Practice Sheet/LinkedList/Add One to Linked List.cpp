/*https://workat.tech/problem-solving/practice/add-one-linked-list*/

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
ListNode* reverse(ListNode*head){
	ListNode*curr=head;
	ListNode*prev=NULL;
	while(curr!=NULL){
		ListNode* nextNode=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextNode;
	}
	return prev;
}
ListNode* addOneToList(ListNode* head) {
	// add your logic here
	head=reverse(head);
	ListNode* currNode =head;
	ListNode* prev=NULL;
	int carry=1;
	while(currNode!=NULL){
		currNode->data=currNode->data+carry;
		carry=(currNode->data)/10;
		currNode->data=(currNode->data)%10;
		prev=currNode;
		currNode=currNode->next;
	}
	if(carry!=0){
		ListNode* nextNode=new ListNode(carry);
		prev->next=nextNode;
		
	}
	return reverse(head);
}
