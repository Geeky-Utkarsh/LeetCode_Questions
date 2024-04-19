// Brute Force n^2 approach 

// class Solution {
// public:
//     bool checkIfExist(vector<int>& arr) {
//         for(int i=0; i<arr.size(); ++i){
//             for(int j=0; j<arr.size(); ++j){
//                 if(i!=j){
//                     if(arr[i]==2*arr[j])
//                         return true;
//                 }
//             }
//         }
//         return false;
//     }
// };                                       TC=> O(n^2)  SC=>(1)


// Optimised Approach 
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // we will be using hash map 
        // We have to check 2 conditions 
            //  i!=j
            //  arr[i]==2*arr[j]

        unordered_map<int,int>mp;

        for(int i=0; i<arr.size(); i++){
            mp.insert({arr[i],i});
            // mp[arr[i]]==i;
        }   

        for(int i=0; i<arr.size(); i++){
            if(mp.find(arr[i]*2)!=mp.end() && mp[arr[i]*2]!=i){
                return true;
            }
        }
        return false;
    }
};