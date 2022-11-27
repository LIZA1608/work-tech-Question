/*https://workat.tech/problem-solving/practice/implement-queue-array*/

// Implement the Queue class
class Queue {
public:
	int frontTrack,rear,currentsize;
	int capacity;
	vector<int>queue;
	
	Queue (int capacity) {
		this->capacity=capacity;
		frontTrack=this->currentsize=0;
		rear=capacity-1;
		queue.resize(this->capacity);
	}

	bool isEmpty() {
return currentsize==0;
	}
	
	int size() {
  return currentsize;
	}
	
	int front() {
		if(isEmpty()){
			return -1;
		}
		return this->queue[this->frontTrack];
	}
	
	int back() {
			if(isEmpty()){
			return -1;
		}
		return this->queue[this->rear];
	}
	
	void push(int element) {
		if(currentsize==capacity){
			return;
		}
		this->rear=(this->rear+1)%this->capacity;
		this->queue[this->rear]=element;
		this->currentsize=(this->currentsize)+1;
	}
	
	
	void pop() {
		this->frontTrack=(this->frontTrack+1)% this->capacity;
		this->currentsize=this->currentsize-1;
	}
};
