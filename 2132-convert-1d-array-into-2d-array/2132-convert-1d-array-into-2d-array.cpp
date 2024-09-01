class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>&o, int m, int n) {
        // edge case 
        if(m*n!=o.size())
          return {};
        
        // making a 2d vector 
        vector<vector<int>>res(m, vector<int>(n));

        int idx=0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                res[i][j]=o[idx];
                idx++;
            }
        }
        return res;

    }
};