class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;

    //     unordered_map<int,int>mp;
    //     auto it=nums.begin();

    //     for(it; it!=nums.end(); it++){
    //         mp[*it]++;
    //     }
    //     for(auto &e : mp){
    //         if(e.second==1)
    //           arr.push_back(e.first);
    //         if(arr.size()==2)
    //           return arr;
    //     }
    //     return arr;

    // 2nd approach --> using a set based approach 

    unordered_set<int>uniqueEle;

    for(auto &e : nums){
    // If the element is already in the set, remove it
        if(uniqueEle.find(e)!=uniqueEle.end()) {
                uniqueEle.erase(e);
        }
        else { // Otherwise, add it to the set
                uniqueEle.insert(e);
            }
     }
     return vector<int>(uniqueEle.begin(), uniqueEle.end());
    }
};