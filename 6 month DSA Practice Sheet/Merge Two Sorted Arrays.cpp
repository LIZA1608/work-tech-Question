/*https://workat.tech/problem-solving/practice/merge-two-sorted-arrays*/

vector<int> mergeSortedArrays(vector<int> &A, vector<int> B) {
    int n=A.size();
	int m=B.size();
	int z=n+m;
	vector<int>C(z);
	int c=0;
	for(int i=0;i<A.size();i++){
		C[i]=A[i];
		c++;
	}
	for(int i=0;i<B.size();i++){
		C[A.size()+i]=B[i];
		c++;
	}
	sort(C.begin(),C.end());
	return C;
}
