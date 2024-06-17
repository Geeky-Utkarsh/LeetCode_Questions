class Solution {
public:
    int thirdMax(vector<int>& nums){

        set<int>set(nums.begin(), nums.end());
        vector<int>b(set.begin(), set.end());

        sort(b.begin(), b.end());

        // return (b.size()>=3) ? b[b.size()-3] : b[b.size()-1];
        if(b.size()>=3)
            return b[b.size()-3];
        return b[b.size()-1];
         

        // if(nums.size()<3){
        //     int mx=*max(nums.begin(), nums.end());
        //        return mx;
        // }

        // set<int>v(nums.begin(), nums.end());
        // vector<int>n(v.begin(), v.end());

        // sort(n.begin(), n.end());

        //  if(n.size()<3){
        //        int m_x=*max(n.begin(), n.end());
        //        return m_x;
        // }
        // return n[2];

        // auto it=(nums.begin()+2);
        // moving the iterator to it so that it points to 3rd element of the set 
        // advance(it,2);
        // int third_mx=*it;
        // return third_mx;
        
    }
};