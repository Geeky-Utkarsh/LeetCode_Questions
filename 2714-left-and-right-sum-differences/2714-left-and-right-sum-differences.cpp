class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        // first we have to calculate left_sum and right_sum as mentioned in question 
        int n=nums.size();
        vector<int>left_sum(n,0), right_sum(n,0);

        // for left sum array 
        left_sum[0]=nums[0];
        for(int i=1; i<n; i++){
            left_sum[i]=left_sum[i-1]+nums[i];
        }

        // for right sum array 
        right_sum[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            right_sum[i]=nums[i]+right_sum[i+1];
        }

        // Now , as we have both left_sum and right_sum array 
        vector<int>ans(n,0);

        for(int i=0; i<n; i++){
            ans[i]=abs(left_sum[i]-right_sum[i]);
        }

        return ans;
    }
};