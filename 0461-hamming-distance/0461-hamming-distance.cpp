class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x^y);
        // catch is we have to find the x^y first and use count number of set bits i.e no of 1s 
    }
};