class Solution {
public:
    int arrangeCoins(int n) {
        long long int lo=0;
        long long int hi=n;

        while(lo<=hi){
            long long int k=lo+(hi-lo)/2;
            long long int m=k*(k+1)/2;

            if(m==n)
              return (int)k;
            else if(m>n)
                hi=k-1;
            else if(m<n)
                lo=k+1;
        }
        return hi;
    }
};