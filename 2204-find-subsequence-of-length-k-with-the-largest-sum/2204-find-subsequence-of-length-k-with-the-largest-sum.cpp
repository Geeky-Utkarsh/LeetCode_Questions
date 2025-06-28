class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>>p;

        for(int i=0; i<nums.size(); i++){
            p.push_back(make_pair(nums[i],i));
        }
        // sorting the pair vector in desceding order based on values 
        sort(p.begin(), p.end(), [](const pair<int, int>&a, const pair<int,int>&b ){
            return a.first > b.first;
        });
        p.resize(k);

        sort(p.begin(), p.end(), [](const pair<int, int>&a, const pair<int,int>&b) {
        return a.second < b.second;
        });
        
        vector<int>res;
        
        for(auto num : p){
            res.push_back(num.first);
        }

        return res;
}
};