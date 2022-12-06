/*https://workat.tech/problem-solving/practice/detect-loop-linked-list*/

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

ListNode* getStartingNodeOfLoop(ListNode* list){
	// add your logic here
	if(list->next==NULL){
		return NULL;
	}
	ListNode* slow=list->next;
	ListNode* fast=list->next->next;
	while(fast!=NULL && fast->next!=NULL){	
		if(slow==fast){
			slow=list;
			break;
		}
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast==NULL|| fast->next==NULL){
			return NULL;
	}
	   while(slow!=fast){
		   slow=slow->next;
		   fast=fast->next;
	   }
	   return slow;
	   
	   }
