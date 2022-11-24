/*https://workat.tech/problem-solving/practice/arithmetic-sequence*/


bool isArithmeticSequence(vector<int> &arr) {
    // add your logic here
	int n=arr.size();
	if(n==1){
		return true;
	}
	sort(arr.begin(),arr.end());
	int d=arr[1]-arr[0];
	for(int i=1;i<arr.size();i++){
		if(arr[i]-arr[i-1] !=d){
			return false;
		}
	}
	return true;
}
