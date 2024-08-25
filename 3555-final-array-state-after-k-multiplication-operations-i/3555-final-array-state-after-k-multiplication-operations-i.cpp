class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {


        while(k--){
        //    int val=*min(nums.begin(), nums.end());
        //    int idx_min=find(nums.begin(), nums.end(), val);
        //    nums[idx_min]=val*multipler;

        auto min_it=min_element(nums.begin(), nums.end()); // it will return an iterator pointing to the index of the minimum element
         *min_it=*min_it*multiplier;// multiplying that nums index element with val

        }
        return nums;
    }
};