class Solution {
public:
    int waysToSplitArray(vector<int>& nums){

        int n=nums.size();

        long long int prefixsum[n];
        long long int suffixsum[n];

        // for prefix sum 
        prefixsum[0]=nums[0];
        for(int i=1; i<nums.size(); i++){
            prefixsum[i]=prefixsum[i-1]+nums[i];
        }

        // for suffix sum 
        suffixsum[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            suffixsum[i]=suffixsum[i+1]+nums[i];
        }

        // now we will be counting all such pairs where 
        //  "The sum of the first i+1 elements is greater than or equal to the sum of the last n-i-1 elements."

        int count=0;

        for(int i=0; i<n-1; i++){
            if(prefixsum[i]>=suffixsum[i+1])
              count++;
        }
        return count;

    }
};