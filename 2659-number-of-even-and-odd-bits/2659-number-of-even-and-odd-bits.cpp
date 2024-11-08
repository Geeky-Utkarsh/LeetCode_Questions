class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0, odd=0;
        int i=0;

        while(n!=0){
            // we will keep dividing by 2 and checking if the remainder is 1 or 0

            if(n%2==1){ // bit at that position is 1

               if(i%2==0) // that means the index is even
                 even++;
               else      // that means the idx is odd
                 odd++;
            }
            i++;

            n=n>>1; // right shifting n to process the next bit 
        }
        return {even,odd};
    }
};