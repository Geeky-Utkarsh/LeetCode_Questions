class Solution {
public:
    const int MOD=1e9+7;

    int valueAfterKSeconds(int n, int k) {
        // we have to simply calculate the prefix sum of the given number k times 
        vector<int>pre_fix(n,1);

        pre_fix[0]=1; // as the prefix sum of 1st element is that 1st element itself
        int idx=1;

        while(k--){
            // pre_fix[idx]=pre_fix[idx-1]+ 
            for(int i=1; i<pre_fix.size(); i++){
                pre_fix[i]=(pre_fix[i]+pre_fix[i-1])%MOD;
            }
        }
        return pre_fix[n-1]; 
    }
};