class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
               int n=nums.size();
        // int left_sum[nums.size()]={0};
        // int right_sum[nums.size()]={0};

        vector<int>left_sum(n,0), right_sum(n,0);


        // for building left_sum
        left_sum[0]=nums[0];

        for(int i=1; i<n; i++){
            left_sum[i]=left_sum[i-1]+nums[i];
        }

        // for building right_sum 
        right_sum[n-1]=nums[n-1];

        for(int i=n-2; i>=0; i--){
            right_sum[i]=nums[i]+right_sum[i+1];
        }

        // now checking the idx where elements are equal in both the sum array
        for(int i=0; i<n; i++){
            if(right_sum[i]==left_sum[i])
               return i;
        }
        return -1;
    }
};