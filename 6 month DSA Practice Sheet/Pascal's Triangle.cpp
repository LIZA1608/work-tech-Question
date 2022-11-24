/*https://workat.tech/problem-solving/practice/pascals-triangle*/

vector<int> pascalTriangleRow(int rowNo) {
	vector<int>pascalRow;
	pascalRow.push_back(1);
	rowNo--;
	for(int i=1;i<=rowNo;i++){
		int rowElement=pascalRow.back()*(rowNo-i+1)/i;
		pascalRow.push_back(rowElement);
	}
	return pascalRow;
}
