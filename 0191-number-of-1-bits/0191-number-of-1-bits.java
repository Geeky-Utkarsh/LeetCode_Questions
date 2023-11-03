public class Solution {
    public int hammingWeight(int n) {

        // Brute force approach TC-> O(b) b= noOf setbits presents (1s)present
        int result=countSetbits(n);
        return result;
    }


    public int countSetbits(int n){
        int cnt=0;

        while(n!=0){
           cnt+=n&1;
           n>>>=1;
        }
      return cnt;
    }
}


 