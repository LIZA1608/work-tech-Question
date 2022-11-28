/*https://workat.tech/problem-solving/practice/median-row-sorted-matrix*/


int calculateMedianOfMatrix(vector<vector<int> > &matrix) {
    // add your logic here
	vector<int>arr;
	int n=matrix.size();
	int m=matrix[0].size();
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		arr.push_back(matrix[i][j]);
	}
}	
	sort(arr.begin(),arr.end());
	int median=(arr.size()/2);
	return arr[median];
}
