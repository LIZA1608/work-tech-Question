

/*https://workat.tech/problem-solving/practice/merge-k-sorted-arrays*/

vector<int> mergeKArrays(vector<vector<int>> &arr) {
	int n=arr.size()*arr[0].size();
         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
	greater<pair<int,pair<int,int>>>>mini;
	for(int i=0;i<arr.size();i++){
		mini.push({arr[i][0],{i,0}});
	}
	vector<int>sortedArray;
	while(!mini.empty()){
		sortedArray.push_back(mini.top().first);
		pair<int ,int>index={mini.top().second.first,mini.top().second.second+1};
		mini.pop();
		if(index.second!=arr[0].size()){
			mini.push({arr[index.first][index.second],{index.first,index.second}});
			
		}
	}
return sortedArray;	
}
