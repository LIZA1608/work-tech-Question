/*https://workat.tech/problem-solving/practice/contains-element*/

bool containsElement(vector<int> &arr, int key) {
   for(int i=0;i<arr.size();i++){
	   if(arr[i]==key){
		   return true;
	   }
   }
	return false;
}
