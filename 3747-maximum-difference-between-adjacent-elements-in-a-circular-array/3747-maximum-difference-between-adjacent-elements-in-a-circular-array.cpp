class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int AbsDiff=INT_MIN, s=nums.size();

        for(int i=0; i<s; i++){

            int w_idx=(i+0)%s;

            AbsDiff=max(AbsDiff,abs( (nums[w_idx]-nums[(w_idx+1)%s]) ) );
        }
        return AbsDiff;
    }
};