class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>pv;

        for(int i=0; i<heights.size(); i++){
            pv.push_back(make_pair(names[i],heights[i]));
        }
        // sorting the pair vector 
        sort(pv.begin(), pv.end(),[](const pair<string,int>p1, const pair<string,int>p2){
            if(p2.second>p1.second)
               return false;
            return true;
        });

        vector<string>res;

        for(auto &e : pv){
            string st=e.first;
              res.push_back(st);
        }
        // sort(res.begin(), res.end(), greater<int>());
        return res;

    }
};