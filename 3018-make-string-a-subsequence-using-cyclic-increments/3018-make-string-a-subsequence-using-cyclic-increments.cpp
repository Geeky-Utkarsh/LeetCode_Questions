class Solution {
public:
    char cyclic_increment(char ch){
        if(isalpha(ch)){
            if(ch=='z')
               ch='a';
            else
              ch++;
        }
        return ch;
    }
    bool canMakeSubsequence(string str1, string str2){
        int i=0, j=0;

        while(i<str1.size() && j<str2.size() ){

            if( str1[i]==str2[j] || cyclic_increment(str1[i])==str2[j] ){
                j++; // pointer of str1 
            }
            i++;
        } 
        return j==str2.size();
    }
};