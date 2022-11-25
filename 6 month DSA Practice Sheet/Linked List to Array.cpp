/*https://workat.tech/problem-solving/practice/linked-list-to-array*/


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

vector<int> linkedListToArray (ListNode* head) {
    // add your logic here
	 vector<int>Array;
	ListNode* currentNode =head;
	while(currentNode !=NULL){
		Array.push_back(currentNode->data);
		currentNode=currentNode->next;
	}
	return Array;
}
