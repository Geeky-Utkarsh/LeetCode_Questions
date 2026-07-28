class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f_max=0, s_max=0;

        for(int &e : nums){
            if(e>f_max){
                s_max=f_max;
                f_max=e;
            }
            else if(e>s_max)
              s_max=e;
        }
        return (f_max-1)*(s_max-1);
    }
};