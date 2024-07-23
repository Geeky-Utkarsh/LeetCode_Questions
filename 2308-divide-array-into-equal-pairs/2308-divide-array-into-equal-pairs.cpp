class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int>mp;

        for(auto &a : nums){
            mp[a]++;
        }    
        for(auto &a : mp){
            int f=a.second;
            if(f%2!=0)
              return false;
        }
        return true;
    }
};