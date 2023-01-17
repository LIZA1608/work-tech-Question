/*https://workat.tech/problem-solving/practice/bfs-of-graph*/

vector<int> bfs(vector<vector<int>> &adjList) {
   queue<int>q;
	vector<int>ans;
	vector<bool>visited(adjList.size(),false);
	visited[0]=true;
	if(adjList.size()==0){
		return ans;
	}
	q.push(0);
	while(!q.empty()){
		int frontnode=q.front();
		q.pop();
		ans.push_back(frontnode);
		for(auto i:adjList[frontnode]){
			if(!visited[i]){
				visited[i]=true;
				q.push(i);
			}
		}
	}
	return ans;
}
