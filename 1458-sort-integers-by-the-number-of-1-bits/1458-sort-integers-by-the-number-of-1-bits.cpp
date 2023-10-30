class Solution {
public:
    int bitCount(int n) {
    bitset<31>bRepresentation(n);
    return bRepresentation.count();
   
    }

    bool customComparator(int a, int b){
       int setBits_a=bitCount(a);
       int setBits_b=bitCount(b);

       if(setBits_a == setBits_b)
          return a<b;// this condition will be matched only iff no.(setbits) in both a and b are same then we will swap a and b if (a<b) i.e ascending order 
        return setBits_a < setBits_b; // swap if(setbit_a>setbit_b)
    }


    vector<int> sortByBits(vector<int>& arr) {
    sort(arr.begin(), arr.end(), [this](int a, int b) {
            return customComparator(a,b);
       });

     return arr;
    }
};