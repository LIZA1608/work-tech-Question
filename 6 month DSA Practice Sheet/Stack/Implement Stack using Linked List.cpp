/*https://workat.tech/problem-solving/practice/implement-stack-linked-list*/


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

// Implement the Stack class
class Stack {
public:
	ListNode* toptrack;
	int stacksize=0;
	int totalsize=0;
	
	Stack (int capacity) {
		toptrack=NULL;
		stacksize=0;
		totalsize=capacity;
	}

	bool isEmpty() {
		return toptrack==NULL;
	}
	
	int size() {
		return stacksize;
	}
	
	int top() {
		if(!isEmpty()){
			return toptrack->data;
		}
		else{
			return -1;
		}
	}
	
	void push(int element) {
		ListNode* temp=new ListNode(element);
		temp->data=element;
		temp->next=toptrack;
		toptrack=temp;
		stacksize++;
	}
	
	void pop() {
		if(toptrack==NULL){
			return;
		}
		toptrack=toptrack->next;
		stacksize--;
	}
};
