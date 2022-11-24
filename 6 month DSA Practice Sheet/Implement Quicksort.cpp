/*https://workat.tech/problem-solving/practice/implement-quicksort*/ 
int makePartition (vector<int> &arr, int low, int high) {
   int pivot = arr[high];
   int currentIndx = low - 1;
   for (int i = low; i < high; i++) {
       if (arr[i] < pivot) {
           currentIndx++;
           int temp = arr[i];
           arr[i] = arr[currentIndx];
           arr[currentIndx] = temp;
       }
   }
   int temp = arr[high];
   arr[high] = arr[currentIndx + 1];
   arr[currentIndx + 1] = temp;
   return currentIndx + 1;
}
void quicksort (vector<int> &arr, int low, int high) {
   if (low < high) {
       int pivot = makePartition (arr, low, high);
       quicksort (arr, low, pivot - 1);
       quicksort (arr, pivot + 1, high);
   }
}
void quickSort(vector<int> &arr) {
   int n = arr.size();
   quicksort (arr, 0, n-1);
}
