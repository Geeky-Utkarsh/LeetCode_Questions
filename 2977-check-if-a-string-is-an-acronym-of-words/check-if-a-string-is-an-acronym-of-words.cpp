class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {

        string res="";

        for(auto &word : words){
            res=res+word[0];
        }
        return res==s;
    }
};