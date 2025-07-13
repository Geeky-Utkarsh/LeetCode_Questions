class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int i=0, j=nums.size()-1;

        while(i<=j){
            if(nums[i]%2==0)
               nums[i]=0;
            else 
             nums[i]=1;
            
            i++;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};