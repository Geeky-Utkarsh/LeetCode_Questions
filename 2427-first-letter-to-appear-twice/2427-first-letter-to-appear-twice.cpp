class Solution {
public:
    char repeatedCharacter(string s) {
        // Here we will keep the track of all the elements from left to right in a set 
        // if we meet same value again <=> it occurred twice 

        unordered_set<char>set;

        for(int i=0; i<s.size(); i++){
            if(set.find(s[i])!=set.end())
              return s[i];
              
            set.insert(s[i]); // keep inserting element into the set 


        }
        return 0;
    }
};