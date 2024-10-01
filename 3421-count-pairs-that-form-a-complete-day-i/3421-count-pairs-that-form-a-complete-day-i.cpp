class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours){
        // we will using n^2 approach to check all the pairs by brute forcing 
        int count=0;

        for(int i=0; i<hours.size(); i++){
            for(int j=i+1; j<hours.size(); j++){
                int day=hours[i]+hours[j];
                if((day)%24==0)
                 count++;
            }
        }
        return count;
    }
};