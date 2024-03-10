class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // ordered set based approach 
        set<int>set;

        vector<int>res;

        // pushing all the elements of the nums1 into the set 

        for(auto &num : nums1){
            set.insert(num);
        }

        // now iterating through the nums2 array and checking if its elements exists in set or not 
        for(auto &e : nums2){
            if(set.find(e)!=set.end())
             res.push_back(e);
             set.erase(e);
        }
        if (!res.empty()) {
            int min = *min_element(res.begin(), res.end());
            return min;
        } else {
            // Handle case when there are no common elements
            return -1; // Or any other default value
        }

    }
};