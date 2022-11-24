
/*https://workat.tech/problem-solving/practice/next-greater-element-in-sorted-array*/
int getNextGreaterElement(vector<int> &arr, int key) {
    // add your logic here
	int n=arr.size();
	int y;
	if(arr[n-1]<=key){
		return key;
	}
	for(int i=0;i<arr.size();i++){
		if(arr[i]>key){
			return arr[i];
		}
	}
}
