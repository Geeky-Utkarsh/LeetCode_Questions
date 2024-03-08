class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
     unordered_map<int,int>f;

     for(auto &e : nums){
         f[e]++;
     }
     int max_freq=INT_MIN;

     for(auto &e : f){
         if(e.second>=max_freq)
             max_freq=max(max_freq,e.second);
     }
         int count=0;

         for(auto &e : f){
             if(e.second==max_freq)
               count+=e.second;
         }
         return count;
    }
};