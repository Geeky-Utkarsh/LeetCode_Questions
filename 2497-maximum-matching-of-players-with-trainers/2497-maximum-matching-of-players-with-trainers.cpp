class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int i=0, j=0;

        sort(p.begin(), p.end());
        sort(t.begin(), t.end());

        int count=0;

        while(i < p.size() && j < t.size()){
            if(p[i]<=t[j]){
                count++;
                i++,
                j++;
            }
            else
               j++;
        }
        return count;
    }
};

class Solution1 {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        return 0;
    }
};