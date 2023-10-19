// // /**
// //  * // This is the MountainArray's API interface.
// //  * // You should not implement it, or speculate about its implementation
// //  * class MountainArray {
// //  *   public:
// //  *     int get(int index);
// //  *     int length();
// //  * };
// //  */

// // class Solution {
// // public:
// //     int findInMountainArray(int target, MountainArray &mountainArr) {
// //         }

// //     }
// // };

// class Solution {
// public:
//     int peakIndexMountainArray(MountainArray &mountainArr){
//         int n=mountainArr.length();
//         int l=0;
//         int r=n-1;

//         while(l<r){
//             int mid=l+(r-l)/2;

//             if(mountainArr.get(mid) < mountainArr.get(mid+1))
//               l=mid+1;
//             else 
//                r=mid;
//         }
//         return l;
//     }
// // Ascending order binary search to search in 1st halft  
//     int binarySearch(int target, MountainArray &mountainArr){
//         int mid;
//         while(l<=r){
//             mid=l+(r-l)/2;

//             if(mountainArr.get(mid)==target)
//               return mid;
//             else if(mountainArr.get(mid)>target)
//               r=mid-1;
//             else
//               l=mid+1;
//         }
//         return -1;
//     }
// //  Descending order binary search to search in 2nd order
//     int reverseBinarySearch(int target, MountainArray &mountainArr){
//         int mid;
//         while(l<=r){
//             mid=l+(r-l)/2;

//             if(mountainArr.get(mid)==target)
//               return mid;
//             else if(mountainArr.get(mid)>target)
//               r=mid+1;
//             else
//               l=mid-1;
//         }
//         return -1;
//     }

//     int findInMountainArray(int target, MountainArray &mountainArr) {
//         int length = mountainArr.length();
//         int peakIndexInMountainArray(mountainArr);

//         // applying binary search from 0 to idx
//         int result_idx = binarySearch(mountainArr, 0, target);

//         if(result_idx!=-1){
//           return result_idx;
//         }

//         // idx+1  to n-1
//         result_idx = reverseBinarySearch(mountainArr, idx+1, n-1, target);
//         return result_idx;
//     }
// };
class Solution {
public:
    int peakIndexInMountainArray(MountainArray &mountainArr) {
        int n = mountainArr.length();
        
        int l = 0;
        int r = n-1;
        
        while(l < r) {
            
            int mid = l + (r-l)/2;
            
            if(mountainArr.get(mid) < mountainArr.get(mid+1))
                l = mid+1;
            else
                r = mid;
            
        }
        
        return l;
    }
    
    int binarySearch(MountainArray &mountainArr, int l, int r, int target) {
        
        int mid;
        while(l <= r) {
            mid = l + (r-l)/2;
            
            if(mountainArr.get(mid) == target) {
                return mid;
            } else if(mountainArr.get(mid) > target) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        
        return -1;
        
    }

    int reverseBinarySearch(MountainArray &mountainArr, int l, int r, int target) {
        int mid;
        while(l <= r) {
            mid = l + (r-l)/2;
            
            if(mountainArr.get(mid) == target) {
                return mid;
            } else if(mountainArr.get(mid) > target) { //Because the array in right side of peak is in descending order
                l = mid+1;
            } else {
                r = mid-1;
            }
        }
        
        return -1;
        
    }
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        
        int peakIndex = peakIndexInMountainArray(mountainArr);
        
        int idx = binarySearch(mountainArr, 0, peakIndex, target);
        
        if(idx == -1) {
            return reverseBinarySearch(mountainArr, peakIndex, n-1, target);
        }
        
        return idx;
        
    }
};
