class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>lostcount;

        for(auto match : matches){
            int pwin=match[0];
            int plost=match[1];

            if(lostcount.find(pwin)==lostcount.end())
               lostcount[pwin]=0;

            lostcount[plost]++;
        }

        vector<int>zeroLost,oneLost;

        for(auto p : lostcount){

            if(p.second==0)
               zeroLost.push_back(p.first);
            if(p.second==1)
               oneLost.push_back(p.first);
        }
        return {zeroLost,oneLost};
    }
};