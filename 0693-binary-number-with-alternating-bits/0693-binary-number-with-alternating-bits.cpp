class Solution {
public:
    bool hasAlternatingBits(int n) {
    unsigned int xor_result = n^(n >> 1);

    return (xor_result & (xor_result + 1))==0;
    }
};