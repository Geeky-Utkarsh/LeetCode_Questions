class Solution {
public:
    int isPrefixOfWord(string s, string searchw) {

        int i=1;
        stringstream ss(s);
        string tmp="";

        while(getline(ss,tmp,' ')){

            if(tmp.find(searchw)==0){
                return i;
            }
            i++;
        }
        return -1;
    }
};