class Solution {
public:
    int minimumRecolors(string b, int k) {
       // Brute Force approach 
       int min_opp=INT_MAX;

       for(int i=0; i<=b.size()-k; i++){
         int b_count=0;
         for(int j=i; j<i+k; j++){
            if(b[j]=='B')
               b_count++;
         }
          // counting the minimum number of operations 
         min_opp=min(k-b_count, min_opp);
       }
       return min_opp;
    }
};