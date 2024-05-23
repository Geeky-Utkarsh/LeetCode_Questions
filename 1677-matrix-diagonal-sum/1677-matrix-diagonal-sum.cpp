class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // here trick is to target left diagonal and right diagonal 

        int r=mat.size();
        int c=mat[0].size();

        int l_diagonal=0, r_diagonal=0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
               if(i==j){ // left diagonal cells when i==j
                  l_diagonal+=mat[i][j];
               }
               if(i+j==r-1){
                   r_diagonal+=mat[i][j];
               }
            }
        }
        int diagonal_sum=l_diagonal+r_diagonal;
        // now if the matrix is of odd size then middle cell will be common in both left and left
        if(r%2!=0){
            diagonal_sum-=mat[r/2][r/2];
        }

        return diagonal_sum;
    }
};