class Solution {
public:
    int numberOfSpecialChars(string word) {
    // Here we have to return the number of special words 
    // according to question -> a special word is that word -> which have appeared in both lowercase and upper (in pair)
    
        vector<int>l(26,0);
        vector<int>u(26,0);
        
        // mapping occurrence into the frequency map
        for(int i=0; i<word.size(); i++){
            if(word[i]>='a' && word[i]<='z'){
                l[word[i]-'a']++;
            }
            else{
                u[word[i]-'A']++;
            }
        }
        
        int count=0;
        
        for(int i=0; i<26; i++){
            if(l[i]!=0 && u[i]!=0){
                count++;
            }
        }
        return count;
        
    }
};