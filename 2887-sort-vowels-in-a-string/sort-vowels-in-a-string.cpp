#include <unordered_map>
#include <string>

class Solution {
public:
    bool isVowel(char c){
        return (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||
                c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }

    string sortVowels(string s) {

        unordered_map<char,int>count;

        for(auto c : s){
            if(isVowel(c))
                count[c]++;   
        }

        string reqVowels="AEIOUaeiou";
        string ans=s;

        int j=0;
        for(int i=0; i < s.length(); i++){
            if(!isVowel(s[i]))
                continue;

            while(count[reqVowels[j]]==0)
                j++;

            ans[i]=reqVowels[j];
            count[reqVowels[j]]--;
        }
        return ans;
    }
};
