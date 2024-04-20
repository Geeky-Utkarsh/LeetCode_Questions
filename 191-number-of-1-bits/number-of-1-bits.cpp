class Solution {
public:
    int hammingWeight(int n) {
        // we have to return number of set bits aka hamming weight 

        // We will be using brain kernighen algorithm
        // This algorithm invovles taking bitwise AND  &  of  (n) and ()n-1) in each iteration one set bit would be set to 0
        // so number of set bits == number of iteration performed = removal of 1 set bit in each iteration

        int count=0;

        while(n!=0){
            count++;
            n=(n&(n-1));
        }
        return count;
    }
};