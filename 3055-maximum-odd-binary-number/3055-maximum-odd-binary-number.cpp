class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        int ones=count(s.begin(), s.end(), '1');
        int zeros=s.size()-ones;

        ones--;
        string res="";

        while(ones--){
            res+="1";
        }
        while(zeros--){
            res+='0';
        }

        res.push_back('1');

        return res;

    }
};