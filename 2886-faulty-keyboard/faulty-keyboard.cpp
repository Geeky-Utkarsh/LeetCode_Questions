class Solution {
public:
    string finalString(string s) {
        // Using brute force approach 
        string res="";

        for(int i=0; i<s.size(); i++){
            if(s[i]!='i'){
                res+=s[i];  // appending the s[i] into the res
            }
            else{
                reverse(res.begin(), res.end());  // if s[i]='i' is encountered then reverse res without appending 'i'
            }
        }
        return res;
    }
};