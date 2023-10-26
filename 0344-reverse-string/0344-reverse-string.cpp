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



1. Two-Pointer Approach:
Time Complexity: O(n) - Linear time complexity. It iterates through the vector once, where n is the number of elements in the vector.
Space Complexity: O(1) - Constant space complexity. It doesn't require additional memory allocation beyond a few variables.
    
2. Temporary Copy and Swap Approach:
Time Complexity: O(n) - Linear time complexity. It iterates through the vector once to copy it and then swaps the elements in reverse order.
Space Complexity: O(n) - Linear space complexity. It creates a copy of the original vector, consuming additional memory equal to the size of the vector.
    
3. Recursive Approach:
Time Complexity: O(n) - Linear time complexity. It involves multiple recursive calls, each handling a portion of the vector. In total, it's still linear.
Space Complexity: O(n) - Linear space complexity. Each recursive call adds a new frame to the call stack, and the space required for the call stack can be up to the size of the vector.

    
In terms of time complexity, all three approaches have a similar and efficient O(n) time complexity, 
where n is the number of elements in the vector. 
However,they differ in space complexity, 
with the two-pointer approach being the most memory-efficient, as it has O(1) space complexity. 
The other two approaches have O(n) space complexity because they involve additional memory allocation.
