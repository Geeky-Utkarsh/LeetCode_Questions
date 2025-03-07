class Solution {
public:
    vector<int> closestPrimes(int left, int right) {

        vector<bool>prime(right+1,true);
        prime[0]=prime[1]=false;  // 0 and 1 are not prime 

        // Using Sieve of Erasthonese 
        for(int i=2; i*i<=right; i++){
            if(prime[i]){  // if ith is prime 
                for(int j=i*i; j<=right; j+=i){
                    prime[j]=false;
                }
            }
        }

        vector<int>sieve;
        for(int i=left; i<=right; i++){
            if(prime[i])
              sieve.push_back(i);
        }

        if(sieve.size()==1 or sieve.size()<2)
           return {-1,-1};

        // finding the minimum difference pair 
        // minimum difference is <=2

        int minDiff=INT_MAX;
        vector<int>d={-1,-1};

        for(int i=1; i<sieve.size(); i++){
            int diff=sieve[i]-sieve[i-1];

            if(diff<minDiff){
                minDiff=diff;
                d[0]=sieve[i-1];
                d[1]=sieve[i];
            }
        }
        return d;
    }
};