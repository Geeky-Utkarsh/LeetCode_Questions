class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>m;
        int n=s.size();

        for(int i=0; i<n; i++){
            if(s[i]=='(')
               m.push(i);
            else if(s[i]==')'){
                int start=m.top()+1;
                int end=i;
                reverse(s.begin()+start, s.begin()+end);
                m.pop();
            }
        }
        // recreating the string ignoring the brackets
        string res="";
        for(int i=0; i<n; i++){
            if(s[i]=='(' || s[i]==')')
                continue;
            else
               res.push_back(s[i]);
        }
        return res;
    }
};