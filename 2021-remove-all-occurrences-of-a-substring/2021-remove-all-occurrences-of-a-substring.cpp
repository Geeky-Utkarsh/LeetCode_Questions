class Solution {
public:
    string removeOccurrences(string s, string part){

        // if(s.size()<part.size())
        //    return "";

        // if(s=="a" && part=="aa")
        //    return "a";

        size_t idx;
        while ((idx = s.find(part)) != string::npos) { // Keep finding part

            s.erase(idx, part.size()); 
        }
        return s;       
    }
};