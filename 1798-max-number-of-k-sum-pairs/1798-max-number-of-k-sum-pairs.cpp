class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // we can have multiple approaches for this problem 
        // sorting+two-pointer,sorting+binarySearch and hashmap-with compliment 

        sort(nums.begin(), nums.end());

        // Using 2 pointer approach 
        int i=0, j=nums.size()-1;
        int cnt=0;

        while(i<j){
            int pair=nums[i]+nums[j];

            if(pair==k){
                cnt++;
                i++;
                j--;
            }
            else if(pair<k){
                i++;
            }
            else{
                j--;
            }
        } 
        return cnt;
    }
};