/*https://workat.tech/problem-solving/practice/kth-element-linked-list*/

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

ListNode* kthElement (ListNode* head, int k) {
    // add your logic here
int idx=0;
	ListNode* currentNode =head;
	while(currentNode!=NULL){
		idx++;
		if(idx==k){
			break;
		}
		currentNode=currentNode->next;
	}
	return currentNode;
}
