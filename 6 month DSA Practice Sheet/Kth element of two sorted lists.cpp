/*https://workat.tech/problem-solving/practice/kth-two-sorted*/


int getKthElement(vector<int> &firstArr, vector<int> &secondArr, int k) {
   // add logic here
	vector<int>third;
	int n=firstArr.size();
    int m=secondArr.size();
	for(int i=0;i<n;i++){
		third.push_back(firstArr[i]);
		
	}
	for(int i=0;i<m;i++){
		third.push_back(secondArr[i]);
	}
	sort(third.begin(),third.end());
	return third[k-1];
}
