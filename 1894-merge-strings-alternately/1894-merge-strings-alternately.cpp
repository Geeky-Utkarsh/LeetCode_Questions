class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1=word1.size();
        int s2=word2.size();

        string res="";

        int i=0, j=0;

        while(i<s1 && j<s2){
            // merging alternatively starting from word1
            res+=word1[i];
            res+=word2[j];

            i++;
            j++;
        }
        // appending the remaning string
        if(i<s1){
            res.append(word1.begin()+i, word1.end());
        }
        if(j<s2){
            res.append(word2.begin()+j, word2.end());
        }
        return res;      
    }
};