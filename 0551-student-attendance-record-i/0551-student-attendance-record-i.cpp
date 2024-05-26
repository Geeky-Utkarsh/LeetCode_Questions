class Solution {
public:
    bool checkRecord(string s) {
        int  A_count=std::count(s.begin(), s.end(), 'A');


        // if(s.size()!)

        if(A_count>=2)  //  student was absent ('A') for strictly fewer than 2 days total.
          return false;

        int count=0;

        for(int i=0; i<s.size(); i++){
           // check if 'L' is present for 3 or more consecutive days
           if(s[i]=='L'){
               count++;
                if(count>=3) // student was never late ('L') for 3 or more consecutive days.
                   return false;
           }
           else
              count=0;
        }

        return true;
    }
};