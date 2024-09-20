class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        // first copy the vector of string into a set to remove duplicates
        // set<string>st(arr.begin(), arr.end());
        // return stt[k];

        unordered_map<string,int>f;

        for(auto &e : arr){
            f[e]++;
        }
        // now we will be iterating and checking kth index where occurrence ==1 
        int count=0;

        for(string const &s : arr){
            if(f[s]==1){
                count++;
                if(count==k)
                  return s;
            }
        }
        return "";
    }
};