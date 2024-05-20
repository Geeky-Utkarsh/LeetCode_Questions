class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int totals=0;

        for(int i=1; i<(1<<n); i++){
            int curr_sum=0;
            for(int j=0; j<n; j++){
                if(i&(1<<j)){// checking if the jth bits is set in i , if its set then add it
                    curr_sum^=nums[j];
                }
            }
            totals+=curr_sum;
        }
        return totals;
    }
};