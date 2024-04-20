class Solution {
public:
    int reverse(int x) {
        // We have to do 2 things here 
        //  1> reverse the integer 
        //  2> keep the check while reversing each number if its going of bound 

        long long int rev=0;

        while(x!=0){
            long long int temp=x%10;
            rev=(rev*10)+temp;
            x=x/10;
        }
        if(rev>INT_MAX || rev<INT_MIN){
                return 0; // Return 0 if overflow occurs
            }

        return rev;
    }
};