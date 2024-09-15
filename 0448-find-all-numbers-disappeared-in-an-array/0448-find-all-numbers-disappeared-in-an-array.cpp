class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
                // sort(nums.begin(), nums.end());

        // Use cycle sort to place positive elements smaller than n
        // at the correct index
        int n=nums.size();
        int i=0;
        
        while(i<n){
            if(nums[i]>0 && nums[i]<=n && nums[i]!=nums[nums[i]-1])
              swap(nums[i],nums[nums[i]-1]);
            else 
              i++;
        }

        vector<int>missing;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=i+1)
              missing.push_back(i+1);
        }
        return missing;
    }
};