// Brute fore approach 

class Solution{
public:
    int mod=1e9+7;

    int rangeSum(vector<int>& nums, int n, int left, int right) {
        // Generating all possible subarray 
        // and pushing sum of all subarrays int one vector 

        vector<int>tmp;

        for(int i=0; i<n; i++){  // O(n^2)
            int sum=0;
            for(int j=i; j<n; j++){
                sum+=nums[j];
                tmp.push_back(sum);
            }
        }
        // sorting the tmp 
        sort(tmp.begin(), tmp.end());  // n(log n)

        int res=0;
        for(int i=left-1; i<=right-1; i++){
            res=(res+tmp[i])%mod;
        }
        return res;
    }
};