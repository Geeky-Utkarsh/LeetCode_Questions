class Solution{
public:
    int minimumLength(string s) {
        int n=s.size();

        if(n<3)
           return n;

        vector<int>f(26,0);
        int op_cnt=0;

        for(char ch : s){
            f[ch-'a']++;

            if(f[ch-'a']==3){
                op_cnt+=2;
                f[ch-'a']-=2;
            }
        }
        int sz=n-op_cnt;
        return sz;
    }
};


class Solution1{
public:
    int minimumLength(string s) {
        int n=s.size();

        if(n<3)
           return n;

        map<char,int>mp;

        for(char ch : s){
            mp[ch]++;
        }
        // we have to remove those many elements whose frequency count is 3  so for every count 3 reduce 2 from it 
        int op_cnt=0;

        for(char c : s){
            if(mp[c]==3){
                op_cnt+=2;
                mp[c]-=2;
            }
        }

        int sz=n-op_cnt;
        return sz;
        
        return op_cnt;
    }
};




