class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();

        int i=0, j=n-1;

        while(i<j){
            // As the given input is sorted so
            int sum=nums[i]+nums[j];

            if(sum==t)
               return {i+1,j+1}; // indexing starts from 1 ATQ 

            else if(sum<t){
                i++; // move to a larger number 
            }
            else{
                j--;   // move to a lower number 
            }
        }
        return {};
    }
};