#include <unordered_map>
#include <unordered_set>
#include <vector>

// class Solution {
// public:
//     bool uniqueOccurrences(std::vector<int>& arr) {
//         std::unordered_map<int, int> map;
//         for (int num : arr) {
//             map[num] = map[num] + 1;
//         }

//         std::unordered_set<int> set;
//         for (const auto& pair : map) {
//             set.insert(pair.second);
//         }

//         return set.size() == map.size();
//     }
// };

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int>mp;

        for(auto e: arr){
            mp[e]++;
        }


        // Checking for duplicate occurrence counts
        unordered_map<int,int>Unique_Occurrence;

        for(auto pair : mp){
            // If an occurrence count is already in the map, it's a duplicate
            if(Unique_Occurrence.find(pair.second)!=Unique_Occurrence.end())
              return false;
            
            Unique_Occurrence[pair.second]=1;  // Mark the count as unique 
        }
        return true;



//         // set<int>stt;
//         // for(auto e : duplicates){
//         //     stt.insert(e);
//         // }
//         // int s=stt.size();
//         // int v=arr.size();

//         // return s==v;
    }
};