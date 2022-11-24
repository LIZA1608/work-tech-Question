/*https://workat.tech/problem-solving/practice/identical-twins*/

int getIdenticalTwinsCount(vector<int> &arr) {
   unordered_map<int, int> frequency;
   for (auto x: arr) {
       frequency[x]++;
   }
   int identicalTwinCount = 0;
   for (auto x: frequency) {
       identicalTwinCount += (x.second * (x.second - 1) / 2);
   }
   return identicalTwinCount;
}
