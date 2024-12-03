class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string prefix="";

        for(auto c : words){
            prefix+=c;
            if(prefix==s)// Check if the current prefix matches `s`
                return true;
        }



        return false;

    }
};