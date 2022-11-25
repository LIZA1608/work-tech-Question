/*https://workat.tech/problem-solving/practice/sorted-arrays-intersection*/
vector<int> intersection(vector<int> &A, vector<int> &B) {
	// add your logic here
	vector<int>ans;
	int first=0,second=0;
	int n=A.size();
	int m=B.size();
	while(first<n && second<m){
		if(A[first]<B[second]){
			first++;
		}
		else if(A[first]>B[second]){
			second++;
		}
		else{
			ans.push_back(A[first]);
			first++;
			second++;
		}
	}
	return ans;
}
