class Solution {
public:
    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')||(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

    }
    bool halvesAreAlike(string s) {
        int half=s.size()/2;
        int hcount=0;
        int scount=0;

        for(int i=0; i<half; i++){
            if(isVowel(s[i]))
              hcount++;
        }
        // for second haf 
        for(int i=half; i<s.size(); i++){
            if(isVowel(s[i]))
              scount++;
        }
        return hcount==scount;
    }
};