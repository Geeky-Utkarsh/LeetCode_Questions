class Solution {
public:
    int distinctAverages(vector<int>& nums) {

        // set<double>unique;
        // for(int i=0; i<nums.size()-2; i++){

        //     auto max=max_element(nums.begin(), nums.end());
        //     auto min=min_element(nums.begin(), nums.end());

        //     nums.erase(max);
        //     nums.erase(min);
                
        //     int avg=(*max+*min)/2;
        //     unique.insert(avg);
        // }
        set<double>unique;
        int i=0,j=nums.size()-1;

        sort(nums.begin(), nums.end());

        while(i<j){
            unique.insert(double(nums[i]+nums[j])/2);
            i++;
            j--;
        }
        return unique.size();
    }
};  


// class Solution {
// public:
//     int distinctAverages(vector<int>& nums) {
//         set<double> uniqueAverages;
//         int n = nums.size();

//         while (nums.size() >= 2) {
//             int minElem = *min_element(nums.begin(), nums.end());
//             int maxElem = *max_element(nums.begin(), nums.end());
//             uniqueAverages.insert((minElem + maxElem) / 2.0);
//             nums.erase(find(nums.begin(), nums.end(), minElem));
//             nums.erase(find(nums.begin(), nums.end(), maxElem));
//         }

//         return uniqueAverages.size();
//     }
// };
