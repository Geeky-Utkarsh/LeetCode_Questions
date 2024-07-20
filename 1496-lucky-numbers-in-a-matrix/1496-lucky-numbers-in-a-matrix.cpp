class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m=matrix.size(); // length of rows 
        int n=matrix[0].size(); // length of cols 

        vector<int>rowsMins(m);
        vector<int>colsMaxs(n);

        for(int row=0; row<m; row++){
            int minn=INT_MAX;
            for(int col=0; col<n; col++){
                // finding the minimum number in each row 
                minn=min(minn,matrix[row][col]);
            }
            rowsMins[row]=minn;
        }
        // similarly for max number in each column 
        for(int col=0; col<n; col++){
            int maxx=INT_MIN;
            for(int row=0; row<m; row++){
                maxx=max(maxx,matrix[row][col]);
            }
            colsMaxs[col]=maxx;
        }
        // now checking if both the arrays are equal or not 
        vector<int>r;

        for(int rows=0; rows<m; rows++){
            for(int cols=0; cols<n; cols++){
                if(matrix[rows][cols]==rowsMins[rows] && matrix[rows][cols]==colsMaxs[cols])
                    r.push_back(matrix[rows][cols]);
            }
        }
        return r;
    }
};