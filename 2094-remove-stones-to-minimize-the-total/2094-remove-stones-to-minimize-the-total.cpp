class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
           // to return minimum we have shorten the maximum piles right 

           priority_queue<int>pq(piles.begin(), piles.end());
           // by default , priority queue will be using (max heap)-> highest to lowest sorting 

           int sum=0;

           while(k--){

            int r=pq.top();
            pq.pop();

            // int pp=floor(r/2.0);
            r-=(r/2);

            pq.push(r);

           }

           while(!pq.empty()){

             sum+=pq.top();
             pq.pop();
           }

           return sum;

    }
};