class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        // we would be using multiset here 
        int n=nums.size();

        int i=0, j=0;
        int maxLength=0;

        multiset<int>mst;

        while(j<n){
           mst.insert(nums[j]);

           while(*mst.rbegin()-*mst.begin()>limit){
            mst.erase(mst.find(nums[i]));
            i++;

           }
           maxLength=max(maxLength,j-i+1);
           j++;
        }

        return maxLength;

    }
};