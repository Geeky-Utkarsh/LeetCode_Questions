class Solution {
public:
    string reversePrefix(string word, char ch) {
        auto idx_itr=find(word.begin(), word.end(), ch);

        if(idx_itr!=word.end()){
            reverse(word.begin(), idx_itr+1);
        }
        return word;
    }
};