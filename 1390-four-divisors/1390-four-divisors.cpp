class Solution1 {   // Brute Force TLE at [15/18] 
public:
    int sumFourDivisors(vector<int>& nums) {
        int c=0;

        for(int i=0; i<nums.size(); i++){
            int curr=nums[i];

            int DivisorSum=0;
            int DivCnt=0;

            for(int i=1; i<=curr; i++){
                if(curr%i==0){
                    DivisorSum+=i;
                    DivCnt++;
                }
            }
            if(DivCnt==4)
               c+=DivisorSum;
        }
        return c;
    }
};
// -------------------------------------------------------------------------------------
// Optimised Approach 

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int c=0;

        for(int i=0; i<nums.size(); i++){
            int curr=nums[i];

            int DivisorSum=0;
            int DivCnt=0;

            for(int i=1; i*i<=curr; i++){
               if(curr%i==0){  // Factor check 

                   if(i==curr/i){ // Perfect Square 
                    DivisorSum+=i;
                    DivCnt++;
                  }
                  else{   // divisor pair 
                    DivCnt+=2;
                    DivisorSum+=i+curr/i;
                   }
               }
               if(DivCnt>4)
                 break;
            }
            if(DivCnt==4)
               c+=DivisorSum;
        }
        return c;
    }
};