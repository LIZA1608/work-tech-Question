/*https://workat.tech/problem-solving/practice/insert-position-in-sorted-array*/

int getInsertPosition(vector<int> &arr, int key) {
    // add your logic here
	int ind=-1;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==key){
			return i;
		}
		if(arr[i]<key){
			ind=i;
		}
	}
	return ind+1;
}
