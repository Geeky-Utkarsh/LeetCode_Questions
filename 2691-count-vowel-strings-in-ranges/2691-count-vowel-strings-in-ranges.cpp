class Solution {
public:
    bool chk(char ch){
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }

    vector<int> vowelStrings(vector<string>&words, vector<vector<int>>&q) {
        int n=q.size();
        int m=words.size();

        vector<int>prefix(m,0);

        int sum=0;

        for(int i=0; i<m; i++){
            int lb=words[i][0], up=words[i].back();

            if(chk(lb) && chk(up))
             sum++;
            
            prefix[i]=sum;
        }

        vector<int>res(n,0);

        for(int i=0; i<n; i++){

            int lb=q[i][0];
            int ub=q[i][1];

            res[i]=prefix[ub] - ( (lb>0) ? prefix[lb-1] : 0); 
        }

        return res;
    }
};