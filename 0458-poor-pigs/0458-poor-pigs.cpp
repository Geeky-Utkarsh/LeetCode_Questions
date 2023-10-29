class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int trials=minutesToTest/minutesToDie +1;

        int pigs=0;

        while(pow(trials,pigs)<buckets){
            pigs++;
        }
        return pigs;
    }
};