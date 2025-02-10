class Solution1 {
public:
    string clearDigits(string s) {
        vector<bool>mark(s.size()+1, false);

        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                  mark[i]=true;
                if(i>0) 
                   mark[i-1]=true;
            }
        }
        string res="";

        for(int i=0; i<s.size(); i++){
            if(!mark[i])
               res+=s[i];
        }
        return res;
    }
};
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Stack based approach 

class Solution {
public:
    string clearDigits(string s) {
        stack<char>stk;

        for(char i : s){
            if(isdigit(i) && !stk.empty() )
               stk.pop();
            else{
                stk.push(i);
            }
        }
        // pushing the stk element into a string 
        string res="";

        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};
