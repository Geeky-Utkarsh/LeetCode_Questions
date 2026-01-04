class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {

        int n=nums.size(), element=-1;
        int maxF=INT_MIN;

        vector<int>f(1e4+1,0);// due to constaints =>  nums[i] will be between 0<=nums[i]<10^4

        for(int i : nums){
            f[i]++;
            if(f[i]>maxF){    // keeping track of maximum frequency from frequency array 
                maxF=f[i];    
                element=i;  // finding maximum that specific element which has max frequency
            }
        }
        return element;

        // T.C = O(nums.size())  and S.C=>O(nums.size())
    }
};