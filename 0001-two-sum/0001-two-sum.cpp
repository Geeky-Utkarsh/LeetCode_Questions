class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute Force O(n^2)
        vector<int>res;

        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target)
                //   res.push_back(nums[i],nums[j]);
                return {i,j};
            }
        }
        return {};
    }
};