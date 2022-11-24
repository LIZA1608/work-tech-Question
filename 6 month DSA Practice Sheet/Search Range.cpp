/*https://workat.tech/problem-solving/practice/search-range*/

vector<int> searchRange(vector<int> &arr, int key) {
  
	int c=-1,d=-1;
	for(int i=0;i<arr.size();i++){
		if(c==-1 && arr[i]==key){
			c=i;
		}
		if(key==arr[i]){
			d=i;
		}
	}
	vector<int>ans={c,d};
	return ans;
}
