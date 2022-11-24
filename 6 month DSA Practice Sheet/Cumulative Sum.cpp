/*Given an array, return its cumulative sum.*/

#include<bits/stdc++.h>
vector<int> getCumulativeSum(vector<int> &arr) {
	vector<int>sum(arr.size());
	sum[0] = arr[0];
	for(int i=1;i<arr.size();i++){
		sum[i]= sum[i-1] + arr[i];
	}
	return sum;
}
