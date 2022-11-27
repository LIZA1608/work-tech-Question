/*https://workat.tech/problem-solving/practice/intersection-two-linked-lists*/
/*-----------------------------------------------------------------------------*/

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
ListNode* findIntersectionNode(ListNode* A,ListNode* B,int diff){
	while(diff>0){
		A=A->next;
		diff--;
	}
while(A!=NULL && B!=NULL){
	if(A==B){
		return A;
	}
	A=A->next;
	B=B->next;
}
	return NULL;
}

ListNode* getIntersectionNode(ListNode *A, ListNode *B) {
    // add your logic here
	int firstLength=0;
	ListNode* firstCurrNode =A;
	while(firstCurrNode!=NULL){
		firstLength++;
		firstCurrNode=firstCurrNode->next;
	}
	int secondLength=0;
	ListNode* secondcurrNode=B;
	while(secondcurrNode!=NULL){
		secondLength++;
		secondcurrNode=secondcurrNode->next;
	}
	if(firstLength<secondLength){
		return findIntersectionNode(B,A,secondLength-firstLength);
	}
	else{
		return findIntersectionNode(A,B,firstLength-secondLength);
	}
	
}
