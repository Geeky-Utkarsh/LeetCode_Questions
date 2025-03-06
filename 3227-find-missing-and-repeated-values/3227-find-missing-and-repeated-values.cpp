class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res(2,0);
        int n=grid.size();

        vector<int>f(n*n+1, 0);

        int a=-1, b=-1;

        for(auto rows : grid){
            for(auto num : rows){
                f[num]++;
            }
        }

        // finding the missing number in the range [1,n^2]
        for(int i=0; i<=n*n; i++){
            if(f[i]==2)
                a=i;
            if(f[i]==0)
                b=i;
        }
        return {a,b};

    }
};