class Solution1 {
public:
    string removeDuplicates(string s) {

        while(true){

              int dup=-1;

              for(int i=1; i<s.size(); i++){
                if(s[i] == s[i-1]){
                    dup=i;
                    break;
                } 
              }
              if(dup==-1)
                 return s;  // no duplicates-found , return s

             // erasing those 2  indexes [i] and [i+1] 
            s.erase(dup - 1, 2);
        }
        return s;
    }
};
//  --------------------------------------------------------------------------

class Solution {
    public: 
     string removeDuplicates(string s){
        stack<char>stk;

        // stk.push(s[0]);

        // for(int i=0; i<s.size(); i++){
            // stk.push(s[i]);

            // if(stk.top()==s[i])
            //   stk.pop();
        // }
        // Pushing Stack Element into String 
        // string res="";

        // for(auto ee : stk)
        //   res.push_back(ee.pop());
        
        // while(!stk.empty()){
            // res+=stk.top();
            // stk.pop();
        // }
        // return res;

        for(int i=0; i<=s.size()-1; i++){

            if( !stk.empty() && stk.top() == s[i] ){
                stk.pop();
            }
            else
               stk.push(s[i]);
        }
        string res="";
        // copying the stack into a string res 
        while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};