class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words){

        unordered_set<char>look_up(allowed.begin(), allowed.end()); // look up = O(1);
        int count=0;

        for(auto &word : words){

            bool is_consistent=true;

            // now will look up in the set to match each character of ch , if its present or not
            for(auto &ch : word){
                if(look_up.find(ch)==look_up.end()){
                    is_consistent=false;
                    break;
                }
                  
                  
            }
            if(is_consistent){
                count++;
            }
        }
        return count;
    }
};