class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int maxLen = 0, n = nums.size();
        int i = 0;

        while (i < n) {
            while (i < n && nums[i] == 0) i++;
            int start = i;

            int neg_count = 0;
            int first_neg = -1, last_neg = -1;

            while (i < n && nums[i] != 0) {
                if (nums[i] < 0) {
                    neg_count++;
                    if (first_neg == -1) first_neg = i;
                    last_neg = i;
                }
                i++;
            }

            if (neg_count % 2 == 0) {
                maxLen = max(maxLen, i - start);
            } else {
                if (first_neg != -1)
                    maxLen = max(maxLen, i - first_neg - 1);
                if (last_neg != -1)
                    maxLen = max(maxLen, last_neg - start);
            }
        }

        return maxLen;
    }
};
