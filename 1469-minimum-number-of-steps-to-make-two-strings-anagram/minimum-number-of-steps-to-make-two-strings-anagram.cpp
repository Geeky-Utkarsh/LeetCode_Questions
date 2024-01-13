class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m1,m2;

        for(auto et : s)
          m1[et]++;

        for(auto st : t)
          m2[st]++;
 

        // int termsMatched=0;
        // for(int i=0; i<s.size(); i++){
        //     if(m1[s[i]]!=m2[t[i]])
        //        termsMatched++;
        // }

        // for(int i=0; i<s.size(); ++i){
        //     char ch=s[i];
        //     count+=max(0,m1[ch]-m2[ch]);
        // }

        int  totalDifferences=0;

        for (const auto& p : m1) {
            char ch=p.first;
            totalDifferences+=max(0,p.second-m2[ch]);
        }

        return totalDifferences;
    }
};


