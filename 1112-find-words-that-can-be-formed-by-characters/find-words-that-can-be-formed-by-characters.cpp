class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
     
    // First store the frequency of characters given in string "chars"
    // Using a map or 26 sized array 
    vector<int>charCount(26,0);

    for(char &ch : chars){
        charCount[ch-'a']++;
    }

    int sum=0;

    for(string &word : words){
        // now check if this word is good or not 
        vector<int>wordCount(26,0);

        for(char &ch : word){
            wordCount[ch-'a']++;
        }

        bool flag=true;
        for(int i=0; i<26; i++){
            if(wordCount[i]>charCount[i]){
                flag=false;
                break;
            }
        }
        if(flag==true)
          sum+=word.length();
    }

    return sum;
  }
};