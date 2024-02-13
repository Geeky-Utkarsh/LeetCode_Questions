class Solution {
public:
    bool isPalindrome(string t){
        string rev=t;
        reverse(rev.begin(), rev.end());
        return t==rev;
    };

    string firstPalindrome(vector<string>& words) {

          for(string &word : words){
              if((isPalindrome(word)))
                return word;
          }
        
        return "";
    }
};