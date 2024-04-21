class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Brute force approach -> SC=O(n) TC=O(N)
        unordered_map<int,int>mp;
        for(auto &e : nums){
            mp[e]++;
        }

        for(auto &e : mp){
            if(e.second==1)
              return e.first;
        }
        return 0;
    }

};