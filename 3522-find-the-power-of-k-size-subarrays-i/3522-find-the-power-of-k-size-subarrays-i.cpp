class Solution {
public:
    vector<int>resultsArray(vector<int>& nums, int k){
    int n=nums.size();
    vector<int>results;

    for (int i=0; i<=n-k; ++i) {
        bool isValid = true;

        // Check if the current window is consecutive and sorted
        for (int j=i+1; j<i+k; ++j) {
            if (nums[j]!=nums[j-1]+1){
                isValid=false;
                break;
            }
        }

        if (isValid){
            results.push_back(nums[i+k-1]);
        } else {
            results.push_back(-1);
        }
    }
    return results;
    }
};
