class Solution {
public:
    bool isValid(string word) {

        int char_cnt=0;
        bool vowel=false;
        bool consonent=false;
        unordered_set<char>v_lookup={'a','e','i','o','u'};

        for(auto a : word){
            if(!isalnum(a)) //It contains only digits (0-9), and English letters (uppercase and lowercase).
                return false;
            if(isalpha(a)) // It contains a minimum of 3 characters.
              char_cnt++;
            if(v_lookup.find(tolower(a))!=v_lookup.end())  // It includes at least one vowel.
                vowel=true;
            else if(isalpha(a)) // It includes at least one consonant. (don't count it on digits) 
                consonent=true;  
        }
        return (vowel && consonent && (word.length()>=3) );
    }
};