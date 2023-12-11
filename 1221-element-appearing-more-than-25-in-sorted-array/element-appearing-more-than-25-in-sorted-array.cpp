class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int>mp;

        for(auto e : arr)
           mp[e]++;

        int moreThan=(int)(arr.size()/4);

        // int val=0;

        for(auto &e : mp){
            if(e.second>moreThan){
              int val=e.first;
              return val;
            }
        }
        return 0;
    }
};