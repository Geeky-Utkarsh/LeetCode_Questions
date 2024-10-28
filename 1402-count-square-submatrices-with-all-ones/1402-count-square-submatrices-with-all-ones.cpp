class Sol{
public:
    int r,c;

    int solve(int i, int j, vector<vector<int>>m){
        if(i>=r || j>=c) // Base case , checking that i and j should not go out of bound 
            return 0;

        if(m[i][j]==0) 
          return 0;

        int right=solve(i,j+1,m);
        int diag=solve(i+1,j+1,m);
        int below=solve(i+1,j,m);

        return 1+min({right,diag,below});
    }

    int countSquares(vector<vector<int>>& m){
        // We will be using recursive approach 

        r=m.size();
        c=m[0].size();

        int res=0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(m[i][j]==1){
                    res+=solve(i,j,m);
                }
            }
        }
        return res;
    }
};

class Solution{
public:

    int countSquares(vector<vector<int>>& m){
        // We will be using recursive approach 

        int r=m.size();
        int c=m[0].size();

        int res=0;

        vector<vector<int>>t(r+1, vector<int>(c, 0));

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){

                if(i==0 || j==0){ // 0th row or 0th column
                   t[i][j]=m[i][j];
                }
                else if(m[i][j]==1){
                    t[i][j]+=1+min({t[i-1][j], t[i-1][j-1], t[i][j-1]});
                } 
                res+=t[i][j];  
            }
        }
        return res;
    }
};