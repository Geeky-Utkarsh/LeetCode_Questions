class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();

        // vector<string>pre(n,0);
        // vector<string>suf(n,0);

        // for prefix 
        // pre[0]=words[0];
        // for(int i=1; i<n; i++){
        //     pref[i]=pre[i-1]+words[i];
        // }
        // // for suffix
        // suf[n-1]=words[n-1];
        // for(int i=n-2; i<=0; i--){
        //     suf[i]=suf[i+1]+words[i];
        // }

        int cnt=0;

        for(int i=0; i<n; i++){
            string wrd=words[i];

            for(int j=i+1; j<n; j++){
                string src=words[j];

                if(wrd.size()>src.size())
                    continue;

                if(src.find(wrd)==0 && src.rfind(wrd)==src.size()-wrd.size())
                  cnt++;
            }
        }
        return cnt;


    }
};