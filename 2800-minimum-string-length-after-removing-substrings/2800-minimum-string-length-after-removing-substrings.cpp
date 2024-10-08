class Solution {
public:
    int minLength(string s) {
    string to_remove1 = "AB";
    string to_remove2 = "CD";
    
    size_t pos;

    // Keep finding 'AB' and 'CD' and then erase them continously 
    while(true){
        bool found = false;
        
        while ((pos=s.find(to_remove1))!=string::npos) {
            s.erase(pos, to_remove1.length());
            found = true;
        }
        
 
        while ((pos=s.find(to_remove2))!=string::npos) {
            s.erase(pos, to_remove2.length());
            found = true;
        }
        
        // If no more substrings were found in this iteration, break
        if (!found) break;
    }
    
    // Return the length of the resulting string
    return s.length();
    }
};