class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0, cnt=0;

        int m=grid.size();
        int n=grid[0].size();

        for(int i=0; i<grid.size(); i++){
          for(int j=0; j<grid[0].size(); j++)
              if(grid[i][j]<0)
                cnt++;
        }
        return cnt;
    }
};