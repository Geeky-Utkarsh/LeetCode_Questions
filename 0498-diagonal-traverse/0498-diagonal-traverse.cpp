class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>con;

        int r=mat.size(), c=mat[0].size();

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                con[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>res;

        bool flag=true;
        for(auto &it : con){
            if(flag)
               reverse(it.second.begin(), it.second.end());
               
            flag=!flag;
            // res.insert(it.second.begin(), it.second.end());
            res.insert(res.end(), it.second.begin(), it.second.end());

        }

        // for(auto &it : con){
        //     if(flag)
        //          reverse(it.begin(), it.end());
        //     flag=!flag;
        //     for(int val : it.second){
        //         res.push_back(val);
        //     }
        // }
        return res;
    }
};