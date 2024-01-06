class Solution {
public:
    static int cF(const pair<string,int>a, const pair<string,int>b){
        if(a.second==b.second){      
            return a.first<b.first;  // if the frequency are same then sort lexicographically 
        }
        return a.second>b.second; // sorting by  fequency
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string,int>f;
        // Storing the occurrence of each word of the vector string into the map
        for(auto &e : words){
            f[e]++;
        }

        // copying the map into vector of pairs to do sorting on a and b
        vector<pair<string,int>>pv(f.begin(), f.end());

        sort(pv.begin(), pv.end(), Solution::cF);
        // copying the pair vector again int a string vector of string 
        vector<string>top;

        for(auto e : pv){
            top.push_back(e.first);
             if(--k==0)
                break ;
        }
        return top;
    }
};