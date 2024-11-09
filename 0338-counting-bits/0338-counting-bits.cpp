class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res(n+1);

        for(int i=0; i<=n; i++){
            int set_bit=__builtin_popcount(i);
            res[i]=set_bit;
        }
        return res;
    }
};