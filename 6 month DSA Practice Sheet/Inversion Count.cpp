
/*https://workat.tech/problem-solving/practice/inversion-count*/

int getInversionCount(vector<int> &array) {
	// Add your logic here
	int c=0;
	int n=array.size();
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(array[i]>array[j]){
				c++;
			}
		}
	}
	return c;
}
