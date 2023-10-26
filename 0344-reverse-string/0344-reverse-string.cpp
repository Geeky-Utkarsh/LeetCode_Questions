class Solution {
public:
    void reverseString(vector<char>& s) {
     
    // brute force approach TC ->O(1) SC->O(1) (Temporary Copy and Swap Approach)

    //  vector<char>strRev(s);
    //   s.reserve(s.size());

    //   for(int i=0; i<s.size(); i++){
    //       s[i]=strRev[s.size()-1-i];
    //   }

      // Optimised approach  TC-> O(n) SC-> O(1)      (2 pointer Approach)
      int l=0;
      int r=s.size()-1;

      while(l<=r){
          swap(s[l],s[r]);

          l++;
          r--;
      }

      // Recursive Approach -> TC->O(n) SP->O(n)
    //   revFun(s, 0, s.size()-1);

    //   void revFun(vector<char>&s, int left, int right){
    //       if(left<right){
    //           swap(s[left],s[right]);
    //       }
    //        // Recursive call on the substring excluding the swapped characters
    //        revFun(s,left+1,right-1);
    //   }



    }
};