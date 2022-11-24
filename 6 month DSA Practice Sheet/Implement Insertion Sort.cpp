/*https://workat.tech/problem-solving/practice/implement-insertion-sort*/

void insertionSort(vector<int> &arr) {
   int n = arr.size();
   for (int i = 1; i < n; i++) {
       int currentElement = arr[i];
       int position = i - 1;
       while (position >= 0 && arr[position] > currentElement) {
           arr[position + 1] = arr[position];
           position--;
       }
       arr[position + 1] = currentElement;
   }
}
