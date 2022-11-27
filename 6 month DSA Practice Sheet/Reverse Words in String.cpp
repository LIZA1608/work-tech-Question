/*https://workat.tech/problem-solving/practice/reverse-words-string*/

string reverseWords(string &s) {
    // add your logic here
	vector<string> allwords;
	string currentwords= "";
	for(int i=0;i<s.size();i++){
           if(s[i]== ' '){
			   allwords.push_back(currentwords);
			   currentwords= "";
			   
		   }
		else{
			currentwords+=s[i];
		}
	}
	allwords.push_back(currentwords);
	string ans;
	for(int i=allwords.size()-1;i>0;i--){
		ans+=allwords[i];
		ans+=' ';
		
	}
	ans+=allwords[0];
	return ans;
}
