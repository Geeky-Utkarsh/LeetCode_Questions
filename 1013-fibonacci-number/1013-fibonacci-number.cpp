class Solution {
public:
    int fib(int n){
        // we will be using prefix sum approach 
        if(n==0)
          return 0;
        if(n==1)
           return 1;
        
        vector<int>prefix(n+1,0);

        prefix[0]=0;
        prefix[1]=1;

        for(int i=2; i<prefix.size(); i++){
            prefix[i]=prefix[i-1]+prefix[i-2];
        }
        return prefix[n];
    }
};