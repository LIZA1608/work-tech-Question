/*https://workat.tech/problem-solving/practice/add-numbers-lists*/

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

ListNode* addTwoNumbers(ListNode* firstList, ListNode* secondList) {
	// add your logic here
	ListNode *head=NULL;
	ListNode *prev=NULL;
	int carry=0;
	while(firstList!=NULL || secondList!=NULL){
		int val1;
		if(firstList!=NULL){
			val1=firstList->data;
		}
		else{
			val1=0;
		}
		int val2;
		if(secondList!=NULL){
			val2=secondList->data;
		}
		else{
			val2=0;
		}
		int sum=val1+val2+carry;
		carry=sum/10;
		int val=sum%10;
		ListNode* curr=new ListNode(val);
		if(head==NULL){
			head=curr;
		}
		if(prev!=NULL){
			prev->next=curr;
		}
		prev=curr;
		if(firstList!=NULL){
			firstList=firstList->next;
		}
		else{
			firstList=NULL;
		}
		if(secondList!=NULL){
			secondList=secondList->next;
		}
		else{
			secondList=NULL;
		}
	}
	if(carry>0){
		ListNode* extraNode=new ListNode(carry);
		prev->next=extraNode;
	}
	return head;
}
