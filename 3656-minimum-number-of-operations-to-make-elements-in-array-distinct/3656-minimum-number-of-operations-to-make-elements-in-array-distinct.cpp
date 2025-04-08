class Solution {

public:
    int minimumOperations(vector<int>& nums) {
     int op=0;

      while(true){
        unordered_set<int>s(nums.begin(), nums.end());

        if(s.size()==nums.size()) 
              break; // all elements are distinct

        int removeCount = min(3, (int)nums.size());
        nums.erase(nums.begin(), nums.begin() + removeCount);
        op++;
    }

    return op;
    }
};