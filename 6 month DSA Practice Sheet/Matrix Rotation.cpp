/*https://workat.tech/problem-solving/practice/matrix-rotation*/

vector<vector<int> > rotateMatrix(vector<vector<int> > &matrix){
    
int numRows=matrix.size();
	int numCols=matrix[0].size();
	vector<vector<int>> rotatedMatrix(numCols,vector<int>(numRows));
	for(int i=0;i<numRows;i++){
		for(int j=0;j<numCols;j++){
			rotatedMatrix[j][i]=matrix[i][j];
		}
	}
	for(auto &x:rotatedMatrix){
		reverse(x.begin(),x.end());
	}
	return rotatedMatrix;

}
