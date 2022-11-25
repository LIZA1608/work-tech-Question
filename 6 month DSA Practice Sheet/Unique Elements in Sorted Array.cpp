/*https://workat.tech/problem-solving/practice/unique-elements-sorted-array*/

int removeDuplicates(vector<int> &A) {
    // add logic here
	int n=A.size();
	int left=0;
	int right=A.size()-1;
	while(left<right){
		while(left!=right && A[left]==A[left+1]){
			n--;
			left++;
		}
		while(left!=right && A[right]==A[right-1]){
			n--;
			right--;
		}
		left++;
	}
	return n;
}
