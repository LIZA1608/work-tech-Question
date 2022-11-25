
/*https://workat.tech/problem-solving/practice/add-kth-element-linked-list*/


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

ListNode* addAtkthElement (ListNode* head, int k, ListNode* newElement) {
    // add your logic here
	int idx=0;
	ListNode* currentNode=head;
	if(k==1){
		newElement->next=head;
		head=newElement;
		return head;
	}
	while(currentNode!=NULL){
		idx++;
		if(idx==k-1){
		break;	
		}
		currentNode=currentNode->next;
	}
	newElement->next=currentNode->next;
	currentNode->next=newElement;
	return head;
}
