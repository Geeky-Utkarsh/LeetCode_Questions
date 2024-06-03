class Solution {
public:
    int appendCharacters(string s, string t) {
        // Using 2 Pointer approach 
        // We have append the non-common characters at the end of s so that t becomes a subsequence of s 

        int m=s.size();
        int n=t.size();

        int i=0; // pointing to s
        int j=0; // pointing to t

        while(i<m && j<n){
            if(s[i]==t[j]){ // if both the character are equals move both pointers 
                i++;
                j++;
            }
            else
                i++;
        }
        return n-j; // no of characters to be appended at the end of s 

    }
};