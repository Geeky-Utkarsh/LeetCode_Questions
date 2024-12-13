class Solution1 {
public:
    bool chk(int lb, int ub, vector<int>nums){

        for(int i=lb; i<ub; i++){
            if(nums[i]%2==(nums[i+1]%2))  // parity is same 
              return false;
        }
        return true;
    }

    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries){
        int n=nums.size();

        vector<bool>bolo;
        int j=0;

        for(const auto &query : queries){

            int lb_range=query[0];
            int ub_range=query[1];

            // now checking the subarray within the bound 
            if(chk(lb_range, ub_range, nums)){
                bolo.push_back(true);
            }
            else 
              bolo.push_back(false);
        }
        return bolo;
    }
};

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries){
        int n=nums.size();

        vector<int>prefix(n);

        // precomputing the the parity using prefix array 
        prefix[0]=0;

        for(int i=1; i<n; i++){
            if(nums[i]%2 != nums[i-1]%2){
                prefix[i]=prefix[i-1]+1;
            }
            else
              prefix[i]=prefix[i-1];
        }
        vector<bool>res;

        // now we don't have to search in the subarray for each query right ? 
        for(vector<int> query : queries){
            int lb=query[0], ub=query[1];

            int alternatingCount = prefix[ub]- (lb > 0 ? prefix[lb] : 0);
            
            if(alternatingCount==ub-lb){
                res.push_back(true);
            }
            else
              res.push_back(false);
        }
        return res;
    }
};