/*https://workat.tech/problem-solving/practice/square-sorted-array*/  


vector<int> getSquareSortedArray(vector<int> &arr) {
	vector<int>ans(arr.size());
	for(int i=0;i<arr.size();i++){
		ans[i]=arr[i]*arr[i];
	}
	sort(ans.begin(),ans.end());
	return ans;
}
