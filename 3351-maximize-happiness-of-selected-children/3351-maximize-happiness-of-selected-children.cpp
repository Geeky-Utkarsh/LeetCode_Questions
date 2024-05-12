class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // Sorting so that the child with maximum happiness appears in descending order

        sort(happiness.begin(), happiness.end(), greater<>());

        long long int res=0;
        int count=0;

        for(int i=0; i<k; i++){
            res+=max(happiness[i]-count,0);
            count++;
        }
        return res;
    }
};