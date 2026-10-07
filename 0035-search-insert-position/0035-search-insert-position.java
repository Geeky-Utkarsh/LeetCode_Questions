class Solution {
    
    public int searchInsert(int[] arr, int target) {
      int l = 0; 
      int r = arr.length-1;

      int idx=0;

      while( l <=r ){
        int mid = (l+r)/2;

        if( arr[mid] == target ){
            idx = mid;
            return idx;
        }
        else if(arr[mid] > target)
          r = mid-1;
        else // means -> key > arr[mid] 
          l = mid+1;
      }

      return l;

    }
}