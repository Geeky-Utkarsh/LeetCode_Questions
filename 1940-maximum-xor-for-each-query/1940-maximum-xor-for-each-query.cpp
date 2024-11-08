class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        vector<int>ans(n);

        int xorr=0; 
        for(int num : nums){
            xorr^=num;
        }         

        // to find flip , generate the masking having all bits set to 1 
        int mask=((1 << maximumBit) -1);

        for(int i=0; i<n; i++){
            int k=xorr^mask;

            ans[i]=k;

            xorr=(xorr^nums[n-i-1]);
        }
        return ans;


    }
};