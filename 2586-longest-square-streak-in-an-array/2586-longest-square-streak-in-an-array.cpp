class Solution1 {
public:
    int longestSquareStreak(vector<int>& nums) {
        // sorting + hash map based approach 
        sort(nums.begin(), nums.end());

        unordered_map<int,int>mp;

        int m_streak=0;

        for(int num : nums){
            // checking if the nums[i] is a perfect square or not 
            int root=(int)sqrt(num);

            if(root*root==num && mp.find(root)!=mp.end()){ // checking if that perfect square is present or not
               mp[num]=mp[root]+1;
            }
            else{
                mp[num]=1;
            }
            m_streak=max(m_streak, mp[num]);
        }

        return m_streak<2 ? -1 : m_streak;
    }
};

class Solution{
public:
    int longestSquareStreak(vector<int>& nums) {
        // unordered_set + hash map based approach 

        unordered_set<int>look_up(nums.begin(), nums.end());
        unordered_map<int,int>mp;

        int m_streak=0;

        for(int num : nums){
            int streak=0;

            long long int curr=num;

            while(look_up.find(curr)!=look_up.end()){
                streak+=1;
                
                curr=curr*curr;
                if(curr>1e5)
                    break;
            }
            m_streak=max(m_streak, streak);
        }
        return m_streak<2 ? -1 :  m_streak;

    }
};