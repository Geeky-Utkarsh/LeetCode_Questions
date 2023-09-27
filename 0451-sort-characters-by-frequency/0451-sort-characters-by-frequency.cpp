// class Solution {
// public:
//     string frequencySort(string s) {

//       map<char,int>mp;
//       for(auto e : s){
//           mp[e]++;
//       }

//       vector<pair<char,int>>cmp;
//       for(auto e : mp){
//           cmp.push_back(mp);
//       }

//       sort(mp.begin(), mp.end(), [](pair<char,int>&a, pair<char,int>&b){
//           return a.second>b.second;
//       });



//       vector<string>v;
//       for(auto e : mp){
//           v.push_back(e.first);
//       }

//       return v;
//     }
// };

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        vector<pair<char, int>> sortedFreq;
        for (const auto& entry : freq) {
            sortedFreq.push_back(entry);
        }

        sort(sortedFreq.begin(), sortedFreq.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second>b.second;
        });

        string res="";
        for (const auto& elem : sortedFreq) {
            res+=string(elem.second, elem.first);
        }

        return res;
    }
};
