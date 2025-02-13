class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long, vector<long>, greater<long>> pq; // Min-heap
        
        for (int num : nums) {
            pq.push(num);
        }
        
        int operations = 0;
        
        while (!pq.empty() && pq.top()<k && pq.size()>=2) {
            long x = pq.top();
            pq.pop();
            long y = pq.top();
            pq.pop();
            
            long newNum = min(x, y) * 2 + max(x, y);
            pq.push(newNum);
            operations++;
        }
        
        return operations;
    }
};
