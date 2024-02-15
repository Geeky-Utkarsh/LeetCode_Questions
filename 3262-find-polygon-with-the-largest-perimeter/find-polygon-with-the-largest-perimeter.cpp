class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        long long int perimeter=0;
        long long int remainingSidesum=0;

        int i=0;
        while(i<nums.size()){
            if(nums[i]<remainingSidesum)
             perimeter=remainingSidesum+nums[i];

            remainingSidesum+=nums[i];
            i++;
        }
        return perimeter== 0?-1:perimeter;
    }
};