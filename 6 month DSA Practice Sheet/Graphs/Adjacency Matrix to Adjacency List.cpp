/*https://workat.tech/problem-solving/practice/adjacency-matrix-to-adjacency-list*/

vector<vector<int>> matrixToAdjList(int n, vector<vector<int>> &matrix) {
    // add your logic here
	vector<vector<int>>adj(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==1){
				adj[i].push_back(j);
			}
		}
	}
	return adj;
}
