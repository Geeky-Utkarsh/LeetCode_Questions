class Solution {
      int find_Localmax(vector<vector<int>>&grid, int rows, int cols){
          int max_value=INT_MIN;

          for(int i=rows; i<=rows+2; i++){
            for(int j=cols; j<=cols+2; j++){
                max_value=max(max_value,grid[i][j]);
            }
          }
          return max_value;
      }
      
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
       int n=grid.size();


       vector<vector<int>>maxLocal(n-2, vector<int>(n-2));

       for(int rows=0; rows<n-2; rows++){
         for(int cols=0; cols<n-2; cols++){
             maxLocal[rows][cols]=find_Localmax(grid,rows,cols);
         }
       }
       return maxLocal;

    }
};