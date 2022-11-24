/*https://workat.tech/problem-solving/practice/is-perfect-square*/

bool searchroot(int start,int end,int num){
	if(start>end){
		return false;
	}
	int mid=start+(end-start)/2;
	int square=mid*mid;
	if(square==num){
		return true;
	}
	if(square>num){
		return searchroot(start,mid-1,num);
	}
	return searchroot(mid+1,end,num);
}


bool isPerfectSquare(int num) {
   int maxVal=10000;
	return searchroot(1,maxVal,num);
}
