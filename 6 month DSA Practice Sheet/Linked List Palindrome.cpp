/*https://workat.tech/problem-solving/practice/linked-list-palindrome*/

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

ListNode* getMiddleNode(ListNode* head){
	ListNode* front=head;
	while(front->next!=NULL && front->next->next!=NULL){
		head=head->next;
		front=front->next->next;
	}
	return  head;
}
ListNode* reverse(ListNode* head){
	ListNode* prevNode=NULL;
	ListNode* nextNode;
	while(head->next!=NULL){
		nextNode=head->next;
		head->next=prevNode;
		prevNode=head;
		head=nextNode;
	}
head->next=prevNode;
	return head;
}
bool isPalindrome(ListNode* list) {
 ListNode* middleNode=getMiddleNode(list);
	ListNode* secondHalf=reverse(middleNode->next);
	while(secondHalf!=NULL){
		if(secondHalf->data!= list->data){
			return false;
		}
		secondHalf=secondHalf->next;
		list=list->next;
	}
	return true;
}
