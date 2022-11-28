/*https://workat.tech/problem-solving/practice/merge-overlap-intervals*/

vector<vector<int> > mergeIntervals(vector<vector<int> > &intervals) {
    // add your logic here
	sort(intervals.begin(),intervals.end());
	int n=intervals.size();
	for(int i=0;i<n-1;i++){
		if(intervals[i][1]>=intervals[i+1][0]){
			intervals[i+1][0]=intervals[i][0];
			intervals[i+1][1]=max(intervals[i][1],intervals[i+1][1]);
			intervals[i][0]=-1;
		}
	}
	vector<vector<int>>ans;
	for(int i=0;i<n;i++){
		if(intervals[i][0] !=-1){
			ans.push_back({intervals[i][0],intervals[i][1]});
		}
	}
	return ans;
}
