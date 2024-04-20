class Solution {
private: 
        int reverseDigit(int n){
        int res=0;

        while(n!=0){
            int lastDigit=n%10;
            res=(res*10)+lastDigit;
            n=n/10;
        }
        return res;
    }

public:
    int countDistinctIntegers(vector<int>& nums) {
        // Simply make a function which will reverse each digit and append it in the same array nums 
        // then insert all the elements of nums into set and then return the size of set 

        int n=nums.size();

        for(int i=0; i<n; i++){
            nums.push_back(reverseDigit(nums[i]));
        }

        unordered_set<int>s(nums.begin(), nums.end());

        return s.size();

    }
};