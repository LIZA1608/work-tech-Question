/*https://workat.tech/problem-solving/practice/two-sum-sorted*/

bool hasTwoSumZero(vector<int> &A) {
	int n=A.size();
	int left=0,right=n-1;
	while(left<right){
		if(A[left]+A[right]==0){
			return true;
		}
		else if(A[left]+A[right]>0){
			right--;
		}
		else{
			left++;
		}
	}
	return false;
}
