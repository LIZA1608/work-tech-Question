/*https://workat.tech/problem-solving/practice/maximum-k-subarray-sum*/

int maxKSubarraySum(vector<int> &A, int k) {
	// add your logic here
	int n=A.size();
	int maxi=0;
	int sum=0;
	for(int i=0;i<k;i++){
		sum+=A[i];
	}
	maxi=max(maxi,sum);
	for(int i=k;i<n;i++){
		sum-=A[i-k];
		sum+=A[i];
		maxi=max(maxi,sum);
	}
	return maxi;
}
