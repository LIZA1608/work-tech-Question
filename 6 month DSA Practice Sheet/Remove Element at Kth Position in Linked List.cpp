/*https://workat.tech/problem-solving/practice/delete-kth-element-linked-list*/

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

ListNode* removekthElement (ListNode* head, int k) {
    // add your logic here
	int idx=0;
	ListNode* currentNode=head;
	if(k==1){
		return head->next;
	}
	while(currentNode!=NULL){
		idx++;
		if(idx==k-1){
			break;
		}
		currentNode=currentNode->next;
	}
	currentNode->next=currentNode->next->next;
	return head;
}
