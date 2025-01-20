class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int s=arr.size();

        unordered_map<int, pair<int,int>>f; // to keep the mapping index [i][j]

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int val=mat[i][j];

                f[val]={i,j};
            }
        }
        // now we will be using 2 vectors to keep the count of painted rows and cols
        vector<int>rowCount(n,0);
        vector<int>colCount(m,0);

        for(int i=0; i<s; i++){
            int val=arr[i];

            auto[row,col]=f[val];

            rowCount[row]++;
            colCount[col]++;

            if(rowCount[row]==m || colCount[col]==n)
              return i;
        }
        return -1;
    }
};
