/*https://workat.tech/problem-solving/practice/remove-duplicates-sorted-linked-list-ii*/

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
	// add your logic here
	ListNode* temp=new ListNode(0);
	if(head==NULL ||head->next==NULL){
		return head;
	}
	ListNode* curr=head;
	head=temp;
	while(curr!=NULL && curr->next!=NULL){
		if(curr->next!=NULL &&curr->data==curr->next->data){
			while(curr->next != NULL && curr->next->data == curr->data){
			curr=curr->next;
	}
			temp->next=curr->next;
		}
	else{
		temp->next=curr;
		temp=temp->next;
	}
	curr=curr->next;
}
	return head->next;
}
