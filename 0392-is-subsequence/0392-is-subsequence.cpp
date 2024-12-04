class Solution {
public:
    bool isSubsequence(string s, string t) {
        // we will be using 2 pointers i,j and make comparisons
        int i=0, j=0;

        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){  // means characters are matching
              i++;
            }
            j++;
        }

        return i==s.size(); // means all i == all elements in s


    }
};