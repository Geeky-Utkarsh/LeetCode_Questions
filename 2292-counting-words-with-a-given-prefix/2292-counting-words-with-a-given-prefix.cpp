class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        
        for(int i=0; i<words.size(); i++){
            string curr=words[i];

            if(curr.find(pref)==0){
                count++;
            }
        }
        return count;
    }
};