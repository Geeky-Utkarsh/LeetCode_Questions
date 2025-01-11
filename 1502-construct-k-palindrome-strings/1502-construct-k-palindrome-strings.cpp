class Solution {
public:
    bool canConstruct(string s, int k) {
        int n=s.size();
        if(n<k)
          return 0;
        
        vector<int>f(26,0);
        for(int e : s){
            f[e-'a']++;
        }

        int cnt=0;

        for(int e : f)
           if(e%2!=0)
             cnt++;
        
        return (cnt>k ? 0:1);
    }
};