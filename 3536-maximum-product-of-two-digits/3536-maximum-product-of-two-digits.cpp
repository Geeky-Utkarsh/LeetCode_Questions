class Solution {
public:
    int maxProduct(int n) {
        int F_max=INT_MIN , S_min=INT_MIN;
        int F_cnt=0;

        string s=to_string(n);

        for(int i=0; i<=s.size()-1; i++){
            int num=s[i]-'0';;

            if(num>F_max){
                F_max=num;  
            }
        }
        F_cnt=count(s.begin(), s.end(), F_max+'0');  // Counting if the max element occurred only 1ce or not.

        if(F_cnt>=2)
            return F_max*F_max;

        
        for(int i=0; i<=s.size()-1; i++){
            int num=s[i]-'0';

            if(num>S_min && F_max>num)
               S_min=num;
        }
        return F_max*S_min;
    }
};