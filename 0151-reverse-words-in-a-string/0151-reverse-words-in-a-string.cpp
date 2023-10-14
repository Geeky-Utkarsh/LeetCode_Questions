// class Solution {
// public:
//     string reverseWords(string s) {
//         vector<string>token(s.size());
//         token.reserve(s.size());

//         istringstream iss (s);
//         string temp;

//         while(iss>>temp){
//             token.push_back(temp);
//         }
//         reverse(token.begin(), token.end());

//         string res="";

//         for(auto &ch : token){
//             res=res+ch+" ";
//         }

//         return res.substr(0, res.size()-1);
//     }
// };

class Solution {
public:
    string reverseWords(string s) {
        vector<string> token(s.size());
        token.reserve(s.size());

        istringstream iss(s);
        string temp;

        while (iss >> temp) {
            token.push_back(temp);
        }
        reverse(token.begin(), token.end());

        string res="";

        for (auto &ch : token) {
            res=res+ch;

            if(ch!=token.back()){
                res=res+" ";
            }
        }

        return res.substr(0, res.size()-1 );
    }
};
