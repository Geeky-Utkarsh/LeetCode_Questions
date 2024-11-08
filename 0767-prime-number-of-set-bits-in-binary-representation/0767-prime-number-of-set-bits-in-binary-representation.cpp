class Solution {
public:
    bool chk(int st){
        unordered_set<int>look_up = {2, 3, 5, 7, 11, 13, 17, 19};
        return look_up.count(st);
    }
    int set_bits(int n){
        int set_bit=0;

        while(n!=0){   // brain kerneighian algo 
            n=n&(n-1);
            set_bit++;
        }
        return chk(set_bit);
    }

    int countPrimeSetBits(int left, int right) {

        int c=0;

        while(left<=right){
            if(set_bits(left))
              c++;
            left++;
        }   
        return c;
    }
};