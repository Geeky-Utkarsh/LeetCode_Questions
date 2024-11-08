class Solution {
public:
    int digit_sum(int n){
        // int num_Digits=floor(log10(n))+1;
        int num_Digits= (n==0) ? 1 : floor(log10(n)) + 1;


        if(num_Digits==1)
           return n;
        
        int sum=0;

        while(n!=0){
            int ld=n%10;
            sum+=ld;
            n=n/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            nums[i]=digit_sum(nums[i]);
        }
        return *min_element(nums.begin(), nums.end());
    }
};