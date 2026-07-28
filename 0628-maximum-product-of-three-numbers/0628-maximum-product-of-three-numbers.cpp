class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // find first 3-maxes 
        int f_max=INT_MIN , s_max=INT_MIN, t_max=INT_MIN;

        for(int e:nums){
            if(e>f_max){
                t_max=s_max;
                s_max=f_max;
                f_max=e;
            }
            else if(e>s_max){
                 t_max=s_max;
                 s_max=e;
            }        
            else if(e>t_max)
                  t_max=e;
        }
        // Finding -ve max and -ve 2nd max 
        int NF_max=INT_MAX, NS_max=INT_MAX;

        for(int &e : nums){
            if(NF_max>e){
                NS_max=NF_max;
                NF_max=e;
            }
            else if(NS_max>e){
                NS_max=e;
            }
        }
        return max( NF_max*NS_max*f_max , f_max*s_max*t_max );
    }
};