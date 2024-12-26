class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // total 256 Ascii characters are there 
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        int m=s.length();

        for(int i=0; i<m; i++){

            char ch1=s[i];
            char ch2=t[i];

            if(mp1.find(ch1)!=mp1.end() && mp1[ch1]!=ch2 || mp2.find(ch2)!=mp2.end() && mp2[ch2]!=ch1)
                return false;
            
            mp1[ch1]=ch2;
            mp2[ch2]=ch1;
        }
        return true;
    }
};