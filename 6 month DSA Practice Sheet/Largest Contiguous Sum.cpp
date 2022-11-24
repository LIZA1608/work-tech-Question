/*https://workat.tech/problem-solving/practice/largest-contiguous*/

int largestContiguousSum(vector <int> &arr){
   int maximumSum=0,currentSum=0;
   int maxValue = INT_MIN, minValue = INT_MAX;

	for (int x: arr) {
       maxValue = max(maxValue, x);
       minValue = min(minValue, x);
   }
   if(maxValue < 0) {
       return minValue;
   }
   for (int i = 0; i < arr.size(); i++) {
       currentSum += arr[i];
       maximumSum = max(maximumSum, currentSum);
       if(currentSum < 0) {
           currentSum = 0;
       }
   }
   return maximumSum;
}
