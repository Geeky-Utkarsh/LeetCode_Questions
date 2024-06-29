class Solution {
public:
    bool is_palindrome(string &r){
        int i=0;
        int j=r.size()-1;

        while(i<=j){
            if(r[i]!=r[j])
               return false;

            i++;
            j--;
        }
        return true;

    }
    bool isPalindrome(string s){

        if(s==" ") // edge case when give string has only whitespace , it would counted as palindrome then also 
           return true;

        string r="";

        for(int i=0; i<s.size(); i++){
            if (isalnum(s[i])){
                r += tolower(s[i]);
             }
        }
        
        // string left_s=new.substr(0,new.size()/2);
        // string right_s=new.substr(new.size()/2, s.size());

        return is_palindrome(r);


    }
};