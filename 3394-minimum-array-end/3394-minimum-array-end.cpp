class Solution {
public:
    long long minEnd(int n, int x) {
     long long num=x;

     for(int i=0; i<n-1; i++){
        num=(num+1)|x;
     }
      return num;
    }
};