class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        // we have to check 2 conditions 
        // i.e 1st => both left and right diagonal should be non-zero
        //     2nd => all other elements are 0 

        int r=grid.size();
        int c=grid[0].size();

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i==j){ // checking left diagonal 
                   if(grid[i][j]==0)
                     return false;
                }
                else if(i==r-1-j){  // checking right diagonal
                   if(grid[i][j]==0)
                       return false;
                }
                else{
                    if(grid[i][j]!=0)
                       return false;
                }
            }
        }
        return true;
    }
};