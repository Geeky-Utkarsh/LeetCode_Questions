class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;

        for(auto it=nums.begin(); it!=nums.end(); it++){
            mp[*it]++;
        }

        int size=nums.size()/3;
        vector<int>ans;

        for(auto e : mp){
            if(e.second>size)
             ans.push_back(e.first);   
        }
        return ans;
    }
};