class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size()!=goal.size())
           return false;
           
        string ss=s+s;

        if(ss.find(goal)!=std::string::npos)
          return true;
        return false;
    }
};