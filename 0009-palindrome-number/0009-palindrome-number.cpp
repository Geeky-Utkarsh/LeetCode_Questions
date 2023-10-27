class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp=x, sum=0;

        if(x<0) return false;

        while(x!=0){
            int lastDigit=x%10;
            sum=sum*10+lastDigit;
            x=x/10;
        }

        if(sum==temp)
          return true;
        else 
         return false;
    }
};