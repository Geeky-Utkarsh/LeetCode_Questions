class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;

        unordered_map<int,int>mp;
        auto it=nums.begin();

        for(it; it!=nums.end(); it++){
            mp[*it]++;
        }

        for(auto &e : mp){
            if(e.second==1)
              arr.push_back(e.first);

            if(arr.size()==2)
              return arr;
        }
        return arr;
    }
};