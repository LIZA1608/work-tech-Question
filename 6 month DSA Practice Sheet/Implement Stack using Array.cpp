/*https://workat.tech/problem-solving/practice/implement-stack-array*/

// Implement the Stack class
class Stack {
public:
	vector<int>stack;
	int topTrack,capacity,currentSize;
	
	
	Stack (int capacity) {
		this->capacity=capacity;
		topTrack=-1;
		currentSize=0;
		stack.resize(this->capacity);
	}

	bool isEmpty() {
		return currentSize==0;
	}
	
	int size() {
		return currentSize;
	}
	
	int top() {
		if(topTrack<0){
			return -1;
		}
return stack[topTrack];
	}
	
	void push(int element) {
		if(topTrack>=capacity-1){
			return;
		}
		stack[++topTrack]=element;
		currentSize++;
	}
	
	void pop() {
		if(topTrack<0){
			return;
		}
		topTrack--;
		currentSize--;
		
	}
};
