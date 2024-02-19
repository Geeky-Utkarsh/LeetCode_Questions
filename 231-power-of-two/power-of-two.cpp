class Solution {
public:
    bool isPowerOfTwo(int n) {

        // Brute Force method -> O(N) diving by 2 and checking odd/even
        // int count=0;

        // while((n%2)!=0){
        //     if(n%2==0)
        //        count;
        // }
        // if(count%2!=0)
        //   return false;
        // else return pow(2,count);

        if(n<=0)
          return false;
        else 
          return __builtin_popcount(n)==1;

        // Using log property 
        auto log=log2(n);

        if(ceil(log)==floor(log))
          return true;
        else
         return false;
    }
};