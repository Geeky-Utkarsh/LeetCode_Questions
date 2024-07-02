class Solution {
public:
    vector<int>intersection(vector<vector<int>>& nums){

        // vector<int>res;

        // for(vector<int>&vec : nums){

        //     vector<int>g={vec.begin(), vec.end()};

        //     // copying the vector g into a set
        //     unordered<int>stt(g.begin(), g.end());

        int n=nums.size();
        unordered_map<int,int>mp;

        for(auto &e : nums){

            vector<int>vec={e.begin(), e.end()};

            // mapping into the map 
            for(auto &it : vec){
                mp[it]++;
            }
        }
     // now we have push each element into the res vector whose occurrence==size of nums

        vector<int>r;

        for(auto &it : mp){
            if(it.second==n)
               r.push_back(it.first);
        } 

        sort(r.begin(), r.end());        
          return r;
      }   
};