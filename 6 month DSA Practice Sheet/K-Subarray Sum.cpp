/*https://workat.tech/problem-solving/practice/k-subarray-sum*/


vector<int> kSubarraySum(vector<int> &A, int k) {
	// add your logic here
	int n=A.size();
	vector<int> list(n-k+1);
	int sum=0;
	int iterator=0;
	for(int i=0;i<k;i++){
		sum+=A[i];
	}
		list[iterator] = sum;
	iterator++;
	for(int i = k; i < n; i++) {
		sum -= A[i - k];
		sum += A[i];
		list[iterator] = sum;
		iterator++;
	}
	return list;
}
