class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_map<int,int>f;

        // Storing the occurrence of each character of the 1st array 
        for(auto &num : nums1)
            f[num]++;
        
        // now using hashmap to find the existence of that arrays 2's element in the array 1 
        for(auto &num  : nums2){
            if(f.find(num)!=f.end()) // if the num2 array's element exists in nums1 array's hashmap then we will push that element into res vector else erase it from map
                result.push_back(num);
                f.erase(num);
        }    
        return result;
    }
};