class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string neww="";
        int space_idx=0;
    
        for(int i=0; i<s.size(); i++){

            if(space_idx < spaces.size() && i == spaces[space_idx]){
                neww+=" ";
                space_idx++;
            }
            neww+=s[i];
            
        }
        return neww;
    }
};