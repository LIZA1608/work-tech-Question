/*https://workat.tech/problem-solving/practice/kth-largest-element*/

int getKthLargestElement(vector<int> &list, int k) {
    // add your logic here
	int n=list.size();
	sort(list.begin(),list.end());
	k=n-k;
			return list[k];
}
