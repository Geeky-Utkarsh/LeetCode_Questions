class Solution1 {
public:
    int d_sum(int n){
        int sum=0;

        while(n!=0){
            int ld=n%10;
            sum+=ld;
            n=n/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        // Brute Force approach 
        int max_Sum=INT_MIN;

        for(int i=0; i<nums.size(); i++){

            for(int j=i+1; j<nums.size(); j++){


                  int d1_sum=d_sum(nums[i]);
                  int d2_sum=d_sum(nums[j]);

                  if(d1_sum==d2_sum){
                     int val=nums[i]+nums[j];

                     max_Sum=max(max_Sum, val);
                  }
            }
        }
        return max_Sum==INT_MIN ? -1 : max_Sum;
    }
};
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


class Solution {
public:
    int GetDigitSum(int n){
        int sum=0;

        while(n!=0){
            int ld=n%10;
            sum+=ld;
            n=n/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        // HashMap based approach 
        unordered_map<int,int>mp;

        int res=-1;

        for(int num : nums){
            int digit_sum=GetDigitSum(num);

            if(mp.count(digit_sum)){  // if this digit sum is seen in past
                res=max(res, num+mp[digit_sum]);
            }
            mp[digit_sum]=max(mp[digit_sum], num);
        }

        return res;


    }
};