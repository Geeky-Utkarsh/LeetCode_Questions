class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        // Return all lonely numbers in nums. You may return the answer in any order. 
        // So we have to search, for each nums[i] whether nums[i]+1 and nums[i]-1 exists of not 

        unordered_map<int,int>f;

        for(auto &e : nums){
            f[e]++;
        }

        vector<int>r;

        for(auto &e : f){
            int num=e.first;

            // A number is lonely if it appears once, and both num-1 and num+1 are not present
            if (e.second==1 && f.find(num+1)==f.end() && f.find(num-1)==f.end())
                r.push_back(num);

            // if(f.find(first)!=f.end() && f.find(second)!=f.end()){
            //     r.push_back(first,second);
            // }
        }
        return r;
    }
};