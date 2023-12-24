class Solution {
public:
    int minOperations(string s) {
        int n=s.size(), cnt=0;

        for (int i=0; i<n; i+=2) {
            if (s[i]=='0') {
                cnt++;
            }
        }
        for(int i=1; i<n; i+=2) {
            if(s[i]=='1') {
                cnt++;
            }
        }

        return min(cnt, n-cnt);
    }
};