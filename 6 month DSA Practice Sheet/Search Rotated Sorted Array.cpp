/*https://workat.tech/problem-solving/practice/search-rotated-array*/

int getElementIndex(vector<int> &array, int target) {
    // add your logic here
	for(int i=0;i<array.size();i++){
		if(array[i]==target){
			return i;
		}
	}
	return -1;
}
