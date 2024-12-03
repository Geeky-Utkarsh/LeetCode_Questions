class Solution {
public:
    int averageValue(vector<int>& nums) {
        int avg_sum=0;
        int count=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                if(nums[i]%3==0){
                   count++;
                   avg_sum+=nums[i];
                }
            }

        }
        // edge case -> if(avg_sum=0)
        if(avg_sum==0)
           return avg_sum;

        float ans=(float)avg_sum/count;
        return ans;

    }
};