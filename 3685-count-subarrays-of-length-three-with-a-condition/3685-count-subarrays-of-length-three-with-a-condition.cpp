class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count=0;
        int n=nums.size();

        for(int i=1; i<n-1; i++){
            if(nums[i-1]+nums[i+1]==static_cast<double>(nums[i]/2.0))
              count++;
        }
        return count;
    }
};