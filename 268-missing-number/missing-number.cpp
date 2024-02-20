class Solution {
public:
    int missingNumber(vector<int>& nums) {

// Approach -1 => mathmatical approach
    long long int vsum=accumulate(nums.begin(), nums.end(), 0);

    int n=nums.size();
    long long int sumOf_n_numbers=n*(n+1)/2;
    
    return sumOf_n_numbers-vsum;

// Approach -4 => simply sorting 

        // sort(nums.begin(), nums.end());
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     if(nums[i]!=i)
        //       return i;
        // }
        // return n;
    }
};