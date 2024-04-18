class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // if (nums[0] == 0) return "0"; 

        bool allZero = true;

        for (int num : nums) {  // Handling edge cases when all elements in nums are zero
            if (num != 0) {
                allZero = false;
                break;
            }
        }
        if (allZero) 
             return "0";

        sort(nums.begin(),nums.end(),[&](int a, int b){
            string aa=to_string(a);
            string bb=to_string(b);

            return aa+bb>bb+aa;
        });

        string ans="";

        for(auto &x : nums){
            ans=ans+to_string(x);
        }
        
        return ans;
    }
};