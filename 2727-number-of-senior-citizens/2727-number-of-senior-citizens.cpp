class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;

        int n=details.size();

        for(int i=0; i<n; i++){
            // int idx=10+1+2+2;
            string dd=details[i];

            string d=dd.substr(11,2);
            int a=stoi(d);

            if(a>60)
               count++;
        }
        return count;
    }
};