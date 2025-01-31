class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz=s.size();
        int i=0;

        int maxLen=0;

        for(int i=0; i<sz; i++){
            unordered_set<char>st;

            string curr="";

            for(int j=i; j<sz; j++){
                if(st.find(s[j])!=st.end())
                    break;

                curr+=s[j];
                st.insert(s[j]);

                maxLen=max(maxLen,(int)curr.size());

            }
        }
        return maxLen;
    }
};