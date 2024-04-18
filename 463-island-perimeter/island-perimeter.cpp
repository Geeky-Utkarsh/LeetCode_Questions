class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int per=0;

        int rows=grid.size();
        int cols=grid[0].size();   // size of column is same as the size of 0th row

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]==1){    // Checking if the cell contains 0 or 1 
                   
                   // now we have to check up,down,left and right

        
                   if(i==0 || grid[i-1][j]==0){  // check up + boundry condition i=0
                      per++;
                   }
                   if(i==rows-1 || grid[i+1][j]==0){  // check down + boundry condition j==rows-1
                      per++;
                   }
                   if(j==0 || grid[i][j-1]==0){  // check left + boundry condition j==0
                      per++;
                   } 
                   if(j==cols-1 || grid[i][j+1]==0){  // check right + boundry condition j==cols-1
                      per++;
                   }
                }
            }
        }
        return per;
    }
};
