class Solution1{
public:
    vector<int> finalPrices(vector<int>& prices) {

        int n=prices.size();
        
        vector<int>answer(n);

        int i=0, j=n-1;

        while(i!=j){
            // int curr_price=prices[i];
            // Finding the discount for curr_price
            int jj=i+1;

            int discount=0;

            while(jj<n){
                if(prices[jj]<=prices[i]){
                    discount=prices[jj];
                    break;
                }
                jj++;
            }
            answer[i]=prices[i]-discount;
            i++;
        }
        answer.pop_back();
        answer.push_back(prices[n-1]);
        
        return answer;
    }
};

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        int n=prices.size();
        
        vector<int>answer(n);

        int i=0;

        while(i<n){
            // int curr_price=prices[i];
            // Finding the discount for curr_price
            int j=i+1;
            int discount=0;

            while(j<n){
                if(prices[j]<=prices[i]){
                    discount=prices[j];
                    break;
                }
                j++;
            }
            answer[i]=prices[i]-discount;
            i++;
        }
        
        return answer;
    }
};