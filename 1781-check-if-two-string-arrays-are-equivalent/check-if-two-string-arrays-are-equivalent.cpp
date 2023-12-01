class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {

        // Brute Force approach 
        stringstream ss1, ss2;
        for(const auto s1 : word1){
            ss1<<s1;
        }
        
        for(const auto s2 : word2){
            ss2<<s2;
        }

        if(ss1.str()==ss2.str())
          return true;
        else 
          return false;
    }
};