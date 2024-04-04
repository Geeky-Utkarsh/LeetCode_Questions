class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream iss(s);
        string tmp="";

        while(iss>>tmp){
            // temp is extracting new string each iteration from iss 
        }
        return tmp.size();

    }
};