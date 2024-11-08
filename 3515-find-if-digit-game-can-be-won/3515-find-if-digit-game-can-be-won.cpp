class Solution {
public:
    bool s_d(int num){
        int num_Digits=(num==0) ? 1 : floor(log10(num));
        return num_Digits;
    }

    bool canAliceWin(vector<int>& nums) {
    //  Alice wins if the sum of her numbers is strictly greater than the sum of Bob's numbers.
    //  Alice can choose either all single-digit numbers or all double-digit numbers from nums

    // we will check if either the sum of all single-digit or all double-digit is greater than the remaining 

    int single_digit_sum=0;
    int double_digit_sum=0;

    for(int num : nums){
        if(s_d(num)){
            single_digit_sum+=num;
        }
        else
          double_digit_sum+=num;
    }
    return (single_digit_sum!=double_digit_sum);

    
    }
};