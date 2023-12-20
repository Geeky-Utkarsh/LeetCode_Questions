class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // Using greedy approach by sorting the prices and then selecting the 1st two cheapest
        sort(prices.begin(), prices.end());

        int s=prices[0]+prices[1];

        if(s>money)
            return money;
        else 
          return money-s; 
    }
};