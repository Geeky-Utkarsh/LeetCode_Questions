class Solution {
public:
    vector<int> findPeaks(vector<int>& m) {
        vector<int>res;

        for(int i=1; i<m.size()-1; i++){

           if(m[i]>m[i-1] and m[i]>m[i+1]){
             res.push_back(i);
           }
        }
        // if(res.size()==0)
            // return {};

        return res;
    }
};