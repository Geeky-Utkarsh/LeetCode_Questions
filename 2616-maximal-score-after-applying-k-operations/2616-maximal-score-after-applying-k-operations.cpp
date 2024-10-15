class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long max_score=0;

        priority_queue<int>pq(nums.begin(), nums.end());

        // now we will keep on popping the top element from heap as (it will be the max element)
        // and take its ceil and division by 3 and push nums[i] back in the heap 

        while(k--){
            int max_element=pq.top();
            pq.pop();

            max_score+=max_element;

            int t=ceil(max_element/3.0);
            pq.push(t);
        }
        return max_score;

    }
};