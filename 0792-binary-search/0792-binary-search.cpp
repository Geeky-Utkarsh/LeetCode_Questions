class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it= lower_bound(nums.begin(), nums.end(), target);
        int idx=distance(nums.begin(), it);

        if(it!=nums.end() && *it==target)
          return idx;
        else
          return -1;
    }
};