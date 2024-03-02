class Solution {
public:
    void sortColors(vector<int>& nums) {
        auto it1 = stable_partition(nums.begin(), nums.end(), [](int x){ 
            return x==0; 
        });
        auto it2 = stable_partition(it1, nums.end(), [](int x) { 
            return x==1; 
        });
    }
};