class Solution {
public:
    int m, n;
    vector<vector<int>>directions={ {-1,0}, {1,0}, {0,-1}, {0,1} };

    int DFS(int i, int j, vector<vector<int>>&grid){

        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0)
           return 0;


        int fishCount=grid[i][j];

        grid[i][j]=0; // marking it visited

        for(auto dir : directions){
            int i_=i+dir[0];
            int j_=j+dir[1];

            fishCount+=DFS(i_,j_, grid);
        }
        return fishCount;
    }


    int findMaxFish(vector<vector<int>>& grid) {
        // Using DFS 
        m=grid.size(), n=grid[0].size();

        int maxFish=0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]>0){// means cell contains water
                  maxFish=max(maxFish,DFS(i, j, grid));
                } 
            }
        }
        return maxFish;
    }
};