/*https://workat.tech/problem-solving/practice/kth-largest-from-data-stream*/

class KthLargest {
public:
	priority_queue<int,vector<int>,greater<int>>mini;
	int K;
    /** initialize your data structure here. */
    KthLargest(int k) {
		while(!mini.empty()){
			mini.pop();
		}
		K=k;
    }
    
    int add(int num) {
		mini.push(num);
		if(mini.size()<K){
			return -1;
		}
		while(mini.size()>K){
			mini.pop();
		}
		return mini.top();
    }
};
