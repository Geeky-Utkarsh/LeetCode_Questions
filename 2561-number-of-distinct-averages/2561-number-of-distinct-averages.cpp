// class Solution {
// public:
//     int distinctAverages(vector<int>& nums) {

//         set<int>unique;
//         sort(nums.begin(), nums.end());
        
//         // Using BruteForce approach O(n)
//         for(int i=0; i<nums.size(); i++){
//             for(int j=i+1; j<nums.size(); j++){
//                 int avg=(nums[i]+nums[j])/2;
//                 unique.insert(avg);
//             }
//         }
//         return unique.size();
//     }
// };
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double> uniqueAverages;
        int n = nums.size();

        while (nums.size() >= 2) {
            int minElem = *min_element(nums.begin(), nums.end());
            int maxElem = *max_element(nums.begin(), nums.end());
            uniqueAverages.insert((minElem + maxElem) / 2.0);
            nums.erase(find(nums.begin(), nums.end(), minElem));
            nums.erase(find(nums.begin(), nums.end(), maxElem));
        }

        return uniqueAverages.size();
    }
};
