class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid){
    
      // checking if all cell in grid are equal to the cell just below one after
      // another 

      int rows=grid.size();
      int cols=grid[0].size();


        // now checking cells in vertical order up to down 
        // means checking all columns

      for(int j=0; j<cols; j++){
        for(int i=0; i<rows-1; i++){
            if(grid[i][j]!=grid[i+1][j])
              return false;
        }
      }
      // now checking cells row wise so that they are different from left to right 
      for(int i=0; i<rows; i++){
          for(int j=0; j<cols-1; j++){
            if(grid[i][j]==grid[i][j+1])
              return false;
          }
      }
      return true;




    }
};