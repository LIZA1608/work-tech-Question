/*https://workat.tech/problem-solving/practice/reverse-linked-list-k-group*/

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
ListNode* reverseLinkedListKGroup(ListNode* head, int k) {
	// add your logic here
	ListNode* currNode =head;
		int total=0;
		while(currNode!=NULL && total<k){
			currNode=currNode->next;
			total++;
		}
	if(total<k){
		return head;
	}
	currNode=head;
	ListNode* prev=NULL;
	ListNode* nextNode;
	int nodeCount=0;
	while(nodeCount<k){
		nextNode=currNode->next;
		currNode->next=prev;
		prev=currNode;
		currNode=nextNode;
		nodeCount++;
	}
	head->next=reverseLinkedListKGroup(nextNode,k);
	return prev;
}
