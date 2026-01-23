class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {        
        int op=0;

        while(!is_sorted(nums.begin(), nums.end())){

            // Fiding i-th index with minimum adjacent pair sum in nums
            int cmp=INT_MAX, idx=0;

            int min_sum=nums[0]+nums[1];

            for(int i=1; i<nums.size()-1; i++){
                int sum=nums[i]+nums[i+1];

                if(min_sum>sum){
                    idx=i;
                    min_sum=sum;
                }
            }
            // merging the minimum adjacent pair sum i.e pairs(i,j)

            nums[idx]=min_sum;
            nums.erase(nums.begin()+idx+1);

            op++;
        }
        return op;
    }
};