/*https://workat.tech/problem-solving/practice/max-consecutive-ones*/

int getMaxConsecutiveOnes(vector<int> &A) {
	int ans=0;
	int maxi=0;
	for(int i=0;i<A.size();i++){
		if(A[i]==1){
			ans++;
		}
		else{
			maxi=max(maxi,ans);
			ans=0;
		}
	}
	if(ans!=0){
		maxi=max(ans,maxi);
	}
	return maxi;
}
