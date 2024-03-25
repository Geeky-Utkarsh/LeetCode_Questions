class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        // Brute Force 
        if(nums.size()==1 or nums.size()==0)
           return {};

        map<int,int>f;
        vector<int>res;

        for(int num : nums){
            f[num]++;
        }

        for(auto e : f){
            if(e.second==2)
               res.push_back(e.first);
        }
        return res;
    }
};