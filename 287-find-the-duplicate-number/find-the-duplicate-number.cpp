class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;

        for(auto e : nums)
          m[e]++;

        for(auto pair : m){
            if(pair.second>1)
              return pair.first;
        }
        return 0;
    }
};