/*https://workat.tech/problem-solving/practice/remove-occurences*/

int removeOccurences(vector<int> &A, int k) {
	// add your logic here
	int ans=0;
	int n=A.size();
	for(int i=0;i<A.size();i++){
		if(k==A[i]){
			ans++;
		}
	}
	return A.size()-ans;
}
