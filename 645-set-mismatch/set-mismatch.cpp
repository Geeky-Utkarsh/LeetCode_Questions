class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>mp;
        // 2 Pass Approach 
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int>res;

        for(auto &p: mp){
            if(p.second==2){
                res.push_back(p.first);
            }
        }

        for(int i=1; i<=nums.size(); i++){
            if(mp.find(i)==mp.end())
              res.push_back(i);       
        }

        return res;
    }
};