// fixed length sliding window approach 
class Solution {
public:
    int minSwaps(vector<int>& nums) { 
        int ones_cnt=count(nums.begin(), nums.end(), 1);

        // window size => count of 1s
        // window_sz=ones_cnt;

        int curr_zeros=0;
        // finding 0's in the first window 
        for(int i=0; i<ones_cnt; i++){
            if(nums[i]==0)
              curr_zeros++;
        }

        // solving for remaining window 
        int min_zeros=curr_zeros;

        int start=0;
        int end=ones_cnt-1;

        int n=nums.size();

        while(start<n){
            // if the element was 0 , decrement  0 counter 
            if(nums[start%n]==0)
               curr_zeros--;
            start++;
            // if the included element is 0, increment 0 counter 
            end++;
            if(nums[end%n]==0){
                curr_zeros++;
            }
            min_zeros=min(min_zeros,curr_zeros);
        }

        return min_zeros;
    }
};