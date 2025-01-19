class Solution {
public:
    typedef pair<int,pair<int,int>>cord;
    vector<vector<int>>directions={{0,-1}, {0,1}, {-1,0}, {1,0} };  // up , down , left and right

    int trapRainWater(vector<vector<int>>& heightMap) {
        int m=heightMap.size();
        int n=heightMap[0].size();

        priority_queue<cord, vector<cord>, greater<> >b_cells; //  min-heap of {height, {i,j}}

        vector<vector<bool>>visited(m, vector<bool>(n, false));

        // left most column and right most columns i.e boundary cells of left n right side {0, n-1};
        for(int row=0; row<m; row++){
            for(int col : {0, n-1}){
                b_cells.push({heightMap[row][col] , {row,col}});
                visited[row][col]=true; // marking that boundry cells visited 
            }
        }

        // top most row and bottom most row {0, n-1} i.e heights 
        for(int col=0; col<n; col++){
            for(int row : {0,m-1}){
                b_cells.push({heightMap[row][col], {row,col}});
                visited[row][col]=true;
            }
        }


        int total_water=0;
        while(!b_cells.empty()){

            cord curr=b_cells.top();
            b_cells.pop();

            int height=curr.first;

            int i=curr.second.first;
            int j=curr.second.second;

            // find the nearest neigbors 
            for(vector<int>&dir : directions){
                int i_ =i+dir[0];
                int j_ =j+dir[1];

                if(i_>=0 && i_<m && j_>=0 && j_<n && !visited[i_][j_]){// adding the check to avoid going out of bound
                    total_water+=max(height - heightMap[i_][j_], 0);

                    b_cells.push({max(height, heightMap[i_][j_]),{i_,j_} });
                    visited[i_][j_]=true;
                } 
            }
        }
        return total_water;
    }
};