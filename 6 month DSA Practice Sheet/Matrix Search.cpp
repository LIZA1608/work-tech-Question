/*https://workat.tech/problem-solving/practice/matrix-search*/

bool searchMatrix(vector<vector<int>> &matrix, int key) {
    // add your logic here
	int n=matrix.size();
	int m=matrix[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==key){
				return true;
			}
		}
	}
	return false;
}
