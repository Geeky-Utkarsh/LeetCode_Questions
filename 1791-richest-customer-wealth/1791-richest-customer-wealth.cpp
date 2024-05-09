class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows=accounts.size();
        int cols=accounts[0].size();

        int highest_wealth=0;
        int maxi=0;

        for(int i=0; i<rows; i++){
            int sum=0;
            for(int j=0; j<cols; j++){
                sum+=accounts[i][j];
            }
            maxi=sum;

            highest_wealth=max(maxi,highest_wealth);
        }
        return highest_wealth;
    }
};