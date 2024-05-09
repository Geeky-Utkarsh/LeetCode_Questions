class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;

        int n=grid.size();

        for(int r=0; r<n; r++){
          for(int c=0; c<n; c++){
            bool check=true;

               // now we will compare all row element  against every column element
              for(int i=0; i<n; i++){
                 if(grid[r][i]!=grid[i][c]){
                    check=false;
                    break;
                  }
               }
              count+=check;
           }
        }
        return count;
    }
};