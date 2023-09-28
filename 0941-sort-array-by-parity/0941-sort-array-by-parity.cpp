class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // sort(nums.begin(), nums.end(),[]{}{
            // if()
        // })

        vector<int>even;
        vector<int>odd;

        for(auto e : nums){
            if(e%2==0)
              even.push_back(e);
            else{
                odd.push_back(e);
            }
        }
        even.insert(even.end(),odd.begin(),odd.end());
        return even;
    }
};