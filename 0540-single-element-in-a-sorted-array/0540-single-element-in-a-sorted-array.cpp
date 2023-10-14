class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int>mp;

        for(auto it=nums.begin(); it!=nums.end(); it++){
            mp[*it]++;
        }

        for(auto e : mp){
            if(e.second==1)
             return e.first;
        }

        return 0;
    }
};