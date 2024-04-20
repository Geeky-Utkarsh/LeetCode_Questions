class Solution {
public:
    int minBitFlips(int start, int goal) {
        // Here in problem the catch 
        // is we have to convert/flip the bits of start to form  goal 
        // so we will take XOR of start^goal then count the set bits present in it by using brian kernighen algorithm 
        // or __nuiltin_popcount() function of CPP

        return __builtin_popcount(start^goal);
    }
};