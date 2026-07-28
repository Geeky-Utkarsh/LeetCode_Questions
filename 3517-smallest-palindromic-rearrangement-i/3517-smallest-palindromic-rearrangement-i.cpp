class Solution {
public:
    string smallestPalindrome(string s) {
        // if(s.size()==1 || s.size()==2)
        //   return s;

        int n=s.length();
        int mid=n/2;

        // Sorting the 1st half 
        sort(s.begin(), s.begin()+mid);

        // mirroring the 2nd half 
        for(int i=0; i<mid; i++){
            s[n-i-1]=s[i];
        }
        return s;

    }
};