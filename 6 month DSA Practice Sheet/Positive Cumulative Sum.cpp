/*https://workat.tech/problem-solving/practice/positive-cumulative-sum*/
/*The cumulative sum of an array at index i is defined as the sum of all elements of the array from index 0 to index i.*/

vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	vector<int>sum(arr.size());
	sum[0] = arr[0];
	for(int i=1;i<arr.size();i++){
		sum[i]=sum[i-1] + arr[i];
	}
vector<int>positivePre;
	for(int i=0;i<arr.size();i++){
		if(sum[i]>0){
			positivePre.push_back(sum[i]);
		}
	}
	return positivePre;
}
