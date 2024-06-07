class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        
        if(nums.size()%k!=0)  // edge case -> if size of hand array is not divible by int groupSize then false 
            return false;

        map<int,int>mp;

        // maping the hands array elements 
        for(auto &e : nums){
            mp[e]++;
        }

        while(!mp.empty()){

            int curr=mp.begin()->first; 

            for(int i=0; i<k; i++){
                if(mp[curr+i]==0){
                    return false;
                }

                mp[curr+i]--;
                if(mp[curr+i]<1){
                    mp.erase(curr+i);
                }
            }
        }
        return true;

    }
};