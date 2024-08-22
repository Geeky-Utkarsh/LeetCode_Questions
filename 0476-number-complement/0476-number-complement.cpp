class Solution {
public:
    int findComplement(int num){
        // Calculate the bit length of the number
        int mask=0;
        int temp=num;

        // Create a bitmask with all bits set to 1 of the same length as num
        while(temp>0){
            mask=(mask<<1)|1;
            temp>>=1;
        }
        return mask^num;

    }
};