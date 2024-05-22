class Solution {
public:
//-----------------------Using Bitmasking------------------------------------------------------
    vector<vector<int>> subsets(vector<int>& nums){

        // for any n (n==nums.size()) there are 2^n possible subsets 
        int n=nums.size();

        vector<vector<int>>res;

        for(int i=0; i<(1<<n); i++){

            vector<int>subset;

            for(int j=0; j<n; j++){
                if((1<<j)&i) // checking if the jth bit is set or not in ith 
                    subset.push_back(nums[j]);
            }
            res.push_back(subset);
        }
        return res;

    }
};