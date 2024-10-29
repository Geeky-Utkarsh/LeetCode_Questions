class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();

        long long prefix[n];
        long long suffix[n];

        prefix[0]=nums[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+nums[i];
        }

        suffix[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            suffix[i]=suffix[i+1]+nums[i];
        }

        long long min_avg=INT_MAX;
        int idx=0;

        for(int i=0; i<n; i++){
            int avgF=prefix[i]/(i+1);
            // int avgL=suffix[i]/(n-i-1);
            int avgL= (i==n-1) ? 0 : suffix[i+1]/(n-i-1);


            int abs_diff=abs(avgF-avgL);

            if(abs_diff<min_avg || (abs_diff==min_avg) && i<idx){
                min_avg=abs_diff;
                idx=i;
            }

        }
        return idx;

        
    }
};