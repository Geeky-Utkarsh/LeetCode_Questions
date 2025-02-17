class Solution {
public:
    void dfs(unordered_map<char, int> &freq, int &count, int length) {
    for (auto &[ch, num] : freq) {
        if (num>0) {  // If character is available
            count++;
            num--;  // Use the character
            dfs(freq, count, length + 1);
            num++;  // Backtrack
        }
    }
}
    int numTilePossibilities(string tiles) {
    unordered_map<char, int> freq;

    for(char c : tiles) 
        freq[c]++;

    int count=0;

    dfs(freq,count,0);

    return count;
    }
};