class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;

        for(int &a : nums){
            mp[a]++;
        }
        // coppying the map into a pair vector 
        vector<pair<int,int>>vp;

        for(auto it=mp.begin(); it!=mp.end(); it++){
            vp.push_back({it->first,it->second});
        }

        sort(vp.begin(), vp.end(), [](const pair<int,int>& a, const pair<int,int>& b){
            if(a.second!=b.second) {
                return a.second<b.second; // Sort by frequency (ascending)
            } 
            else{
                return a.first>b.first; // If frequencies are the same, sort by value (descending)
            }
        });

        vector<int>res;

        // copying the pair vector into a vector
        for(auto &p : vp){
            int num=p.first;
            int freq=p.second;

            for(int i=0; i<freq; ++i) {
                res.push_back(num);
            }
        }
        return res;

    }
};