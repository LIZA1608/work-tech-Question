/*https://workat.tech/problem-solving/practice/even-number-of-digits*/
vector<int> getEvenDigitNumbers(vector<int> &arr) {
	vector<int>fina;
	int h,c;
   for(int i=0;i<arr.size();i++){
	   h=arr[i];
	   c=0;
	   if(arr[i]==0){
		   c=1;
	   }
	   while(h>0){
		   c++;
		   h=h/10;
	   }
	   if(c%2==0){
		   fina.push_back(arr[i]);
	   }
   }
	return fina;
}
