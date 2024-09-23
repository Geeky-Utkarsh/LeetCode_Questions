class Solution1 {
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
class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>f;

        for(int i=0; i<nums.size(); i++){
            f[nums[i]]=i;
        }     

        for(int i=0; i<nums.size(); i++){
            int val=nums[i];
            int to_find=target-val;

            // Checking if the compliment exits in the map or not and also that its not the same index
            if(f.find(to_find)!=f.end() && f[to_find]!=i){
                return {f[to_find],i};
            }     
            // f[val]=i;       
        }
        return {};
    }
};