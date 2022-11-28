/*https://workat.tech/problem-solving/practice/k-diff-pairs*/

int kDiffPairs(vector<int> A, int k) {
	int n = A.size();
	int result = 0;
	unordered_map<int, int> hash;
	unordered_map<int, int> done;
	for(int i = 0; i < n; i++) {
		if(hash[A[i] - k] != 0 && hash[A[i]] == 0) {
			result += 1;
		}
		else if(k == 0) {
			if(hash[A[i]] == 1 && !done[A[i]]) {
				result += 1;
				done[A[i]] = 1;
			}
		}
		hash[A[i]]++;
	}
	return result;
}
