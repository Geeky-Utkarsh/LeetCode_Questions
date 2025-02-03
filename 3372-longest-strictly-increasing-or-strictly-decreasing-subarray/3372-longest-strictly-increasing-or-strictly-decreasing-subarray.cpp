class Solution {
public:
    int longestMonotonicSubarray(vector<int>& n) {
        int s_inc=1, s_dec=1;
        int longest=0;

        if(n.size()==1)
           return 1;

        for(int i=1; i<n.size(); i++){
            if(n[i]>n[i-1]){   // strictly incr
              s_inc++;
            }
            else   // if streak is broken reset to 1
               s_inc=1;

            if(n[i]<n[i-1]){   // for strictly decr
              s_dec++;
            }
            else 
              s_dec=1; // reset to 1 
            
            longest=max({longest,s_dec,s_inc});
            
        }
        return longest;
    }
};