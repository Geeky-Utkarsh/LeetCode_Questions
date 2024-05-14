class Solution {

public:
    vector<vector<int>>directions{{-1,0}, {1,0}, {0,1}, {0,-1}};


    int DFS(vector<vector<int>>&grid, int i, int j){
        int m=grid.size();
        int n=grid[0].size();

        if(i>=m || i<0 || j>=n || j<0 || grid[i][j]==0){// cell should not be out of bound
            return 0;  // zero gold or out of bound cell 
        }

        int original_Gold_Value=grid[i][j];

        grid[i][j]=0;

        int maxGold=0;

        // up down left right backtracking  
        for(vector<int>&dir : directions){
            int new_i=i+dir[0];
            int new_j=j+dir[1];

            maxGold=max(maxGold, DFS(grid, new_i, new_j));
        }

        grid[i][j]=original_Gold_Value;

        return original_Gold_Value+maxGold;

    }        

    int getMaximumGold(vector<vector<int>>& grid) {
        // Simple DFS approach -> we will explore all path and the one which 
        // gives maxium is the answer 

        int m=grid.size();
        int n=grid[0].size();

        int maxGold=0;
    

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]!=0){
                    // It has gold 
                    maxGold=max(maxGold, DFS(grid,i,j));
                }
            }
        }
        return maxGold;

    }
};