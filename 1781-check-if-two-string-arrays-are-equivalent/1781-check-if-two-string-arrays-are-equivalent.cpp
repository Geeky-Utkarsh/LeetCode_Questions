class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1;
        string res2;

        for(auto ch : word1)
         res1+=ch;
        
        for(auto ch : word2)
         res2+=ch;
        
        if(res1==res2)
           return true;
        return false;

    }
};