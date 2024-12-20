class Solution1 {
public:
    int specialArray(vector<int>& nums) {

        int n = nums.size();

        for (int x=1; x<=n; ++x) {
            int count=0;
            for (int num : nums) {
                if (num>=x) {
                    count++;
                }
            }
            if (count == x) {
                return x;
            }
        }
        
        return -1;
    }
};

class Solution {
public:
    int specialArray(vector<int>& nums) {

        sort(nums.begin(), nums.end()); // sorting the array nums

        int n=nums.size();

        for(int x=0; x<=n; x++){

            // count=find_greater__than_equal(nums,x);

            auto it=std::lower_bound(nums.begin(), nums.end(), x); // Finding the first element that is greater or equal to x 
            
            int count=distance(it, nums.end());

            if(count==x) 
               return x;
        }
        return -1;
    }
};