/*https://workat.tech/problem-solving/practice/negative-numbers-in-sorted-array*/

int getNegativeNumbersCount(vector<int> &arr) {
	int c=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]<0){
			c++;
		}
	}
	return c;
}
