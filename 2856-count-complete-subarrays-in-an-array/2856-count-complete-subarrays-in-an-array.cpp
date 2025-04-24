class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        int k=s.size();

        // checking each subarray individually 
        int count=0;
        for(int i=0; i<nums.size(); i++){
            set<int>s;
            for(int j=i; j<nums.size(); j++){
                s.insert(nums[j]);
                if(s.size()==k)
                  count++;
            }  
        }
        return count;
    }
};