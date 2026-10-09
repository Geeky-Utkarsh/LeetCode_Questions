class Solution {
public:
    bool isValid(string s) {

        stack<char>stk;

        for(char c : s){

            // if(!stk.empty() && (stk.top() == '(' or stk.top == '{' or stk.top =='[') 
            //    && (ch== ')' or ch == '}' or ch ==']') ){
            if(  !stk.empty() && (  (stk.top() =='[' && c==']') || (stk.top()=='{' && c=='}') || (stk.top() =='(' && c==')' ) ) ){
                   stk.pop();
            }
            else 
              stk.push(c);
        }
        return !(stk.size());



    }
};