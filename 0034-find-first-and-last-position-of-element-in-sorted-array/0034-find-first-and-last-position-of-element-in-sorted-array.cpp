// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//         vector<int>res;

//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==target)
//                res.push_back(i);
//         }
//         if(nums.size()==0)
//            return {-1};
//         return res;
//     }
// };
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> res = {-1, -1}; // Initialize the result with [-1, -1]

//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == target) {
//                 if (res[0] == -1) {
//                     res[0] = i; // Set the starting position
//                 }
//                 res[1] = i; // Update the ending position
//             }
//         }

//         return res;
//     }
// };
class Solution {
    public:
       vector<int>searchRange(vector<int>&nums, int target){
        //  vector<int>res={-1,-1};

        //  int n=nums.size();
        //  int lo=0;
        //  int hi=n-1;

        //  // First Occurrence 
        //  while(lo<=hi){
        //     int mid=lo+(hi-lo)/2;
            
        //     if(nums[mid]==target){
        //         if(mid==0){
        //             res[0]=mid;
        //         }
        //         else if(nums[mid-1]!=target){
        //             res[0]=mid;
        //             break;
        //         }
        //         else{
        //             hi=mid-1;
        //         }
        //     }
        //     else if(nums[mid]>target)
        //         hi=mid-1;
        //     else if(nums[mid]<target)
        //         lo=mid+1;
        //  }

         // Last Occurrence 
        //   lo=0;
        //   hi=n-1;

        //  while(lo<=hi){
        //      int mid=lo+(hi-lo)/2;

        //      if(nums[mid]==target){
        //          if(nums[mid+1]!=target){
        //              res[1]=mid;
        //              break;
        //          }
        //          else{
        //              lo=mid+1;
        //          }
        //      }
        //      else if(nums[mid]>target)
        //           hi=mid-1;
        //      else if(nums[mid]<target)
        //           lo=mid+1;
        //  }
        // First Occurrence
        vector<int>res={-1,-1};

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                res[0]=i;
                break;
            }
        }

        // last occurence
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]==target){
               res[1]=i;
               break;
            }
        }
         return res;
      }
};