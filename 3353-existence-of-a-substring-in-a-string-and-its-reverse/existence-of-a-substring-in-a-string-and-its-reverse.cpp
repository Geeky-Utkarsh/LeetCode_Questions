class Solution {
public:
    bool isSubstringPresent(string s){
        string rev=s;
        reverse(rev.begin(), rev.end());

        int left=0;
        int right=s.length();

        while(left<right-1){
            string substr=s.substr(left,2);

            if(rev.find(substr)!=string::npos)
                return true;
            
            left++;
        }
        return false;

    }
};