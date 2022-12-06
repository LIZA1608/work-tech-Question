/*https://workat.tech/problem-solving/practice/rotate-linked-list*/

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
ListNode* rotateListByK(ListNode* head, int k) {
	// add your logic here
	if(head==NULL||head->next==NULL){
		return head;
	}
	int total=0;
	ListNode* curr=head;
	while(curr!=NULL){
		total++;
		curr=curr->next;
	}
	k=k%total;
	if(k==0){
		return head;
	}
	k=total-k;
	curr=head;
	int cnt=1;
	ListNode* temp;
	while(curr->next!=NULL){
		if(cnt==k){
			temp=curr->next;
			curr->next=NULL;
			curr=temp;
		}
		else{
			curr=curr->next;
		}
		cnt++;
	}
	curr->next=head;
	head=temp;
	return head;
}
