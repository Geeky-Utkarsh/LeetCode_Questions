class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1, sum=0;

        string s=to_string(n);

        for(int i=0; i<s.size(); i++){
            int ch=s[i]-'0';

            product*=ch;
            sum+=ch;
        }
        return product-sum;
    }
};