class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>res(rowIndex+1);
        // (rowsIndex+1).reserve(res);

        for(int i=0; i<rowIndex+1; i++){
            res[i]=vector<int>(i+1, 1);

            for(int j=1; j<i; j++){
                res[i][j]=res[i-1][j]+res[i-1][j-1];
            }
        }
        return res[rowIndex];
    }
};