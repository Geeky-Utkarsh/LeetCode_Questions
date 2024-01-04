class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>f;

        for(const auto &e : nums)
               f[e]++;

        int operations=0;

        for(auto it : f){
            int f=it.second;

            if(f==1)
              return -1;
          operations+=ceil((double)f/3);
        //   operations+=ceil((double)f/3);
        }

        return operations;
        // tc=> O(N) because map is used    
    }
};