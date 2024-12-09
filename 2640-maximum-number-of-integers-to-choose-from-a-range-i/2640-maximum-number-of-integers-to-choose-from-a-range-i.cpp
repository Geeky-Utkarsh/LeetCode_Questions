class Solution {
public:
    int maxCount(vector<int>& nums, int n, int maxSum) {

        unordered_set<int>look_up{nums.begin(), nums.end()};

        int i=1;

        int sum=0, cnt=0;

        while(i<=n){
            // integers from 1 to n range -> should not be present in the banned array
            if(look_up.find(i)==look_up.end()){
                if(sum+i<=maxSum){
                    cnt++;
                    sum+=i;
                }
                else
                  break;
            }
            i++;   
        }
        return cnt;
    }
};