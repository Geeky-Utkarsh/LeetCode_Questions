// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//         vector<int>res;

//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==target)
//                res.push_back(i);
//         }
//         if(nums.size()==0)
//            return {-1};
//         return res;
//     }
// };
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1, -1}; // Initialize the result with [-1, -1]

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (res[0] == -1) {
                    res[0] = i; // Set the starting position
                }
                res[1] = i; // Update the ending position
            }
        }

        return res;
    }
};
