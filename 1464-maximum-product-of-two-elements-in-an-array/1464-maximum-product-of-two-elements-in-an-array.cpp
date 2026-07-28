class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f_max=0, s_max=0;

        for(int &e : nums){
            if(e>f_max){ // if [current element>f_max] then f_max becomes current element , s_max becomes previous s_max 
                s_max=f_max;
                f_max=e;
            }
            else if(e>s_max) // if [current element > s_max] then s_max becomes -->current element 
              s_max=e;
        }
        return (f_max-1)*(s_max-1);  // this was asked in the question , to return multiplication of [f_max-1*s_max-1]
    }
};