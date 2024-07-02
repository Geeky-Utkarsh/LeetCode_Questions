class Solution1 {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        // Sorting + (i j)  2 pointer approach 
        int i=0, j=0;
        vector<int>res;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
               res.push_back(nums1[i]);
               i++;
               j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
        }
        return res;

    }
};
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Optimised approach 

class Solution{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        // Frequency array based approach 
        int f_array[1001];

        // now we map all values from nums1 into f_array 
        for(int &i : nums1){
            f_array[i]++;
        }

        // now f_array has all the mapping of nums1 
        // now we will check if elements from nums2 exits in nums1 
        // if it does we 

        vector<int>r;

        for(int &num : nums2){
            if(f_array[num]>0){  // means num exits in nums1 
               r.push_back(num);
               f_array[num]--; // dowing the frequency 
            }
        }
        return r;

    }
};