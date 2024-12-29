class Solution {
public:
    string answerString(string word, int numFriends){
        if(numFriends==1)
           return word;

           
        int n=word.size();
        int sz=word.size()-numFriends+1;
        string res="";

        for(int i=0; i<n; i++){
            string str=word.substr(i,sz);
            res=max(str,res);
        }
        return res;
    }
};