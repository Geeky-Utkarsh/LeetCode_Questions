class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2){
        // key is to catch those words whose frequency is only 1 after combining both s1 and s2

        unordered_map<string,int>f;
        vector<string>res;
        
        // Using lambda function to tokensize the strings s1 n s2 
        auto cnt=[&](string s){
            stringstream ss(s);
            string tmp;

            while(getline(ss,tmp,' ')){
                f[tmp]++;
            }
        };

        cnt(s1);
        cnt(s2);

        // now we will check the map which contains mapping(occurrences) of both s1 and s2 words
        for(auto &i :  f){
            if(i.second==1)
              res.push_back(i.first);
        }
        return res;
    }
};