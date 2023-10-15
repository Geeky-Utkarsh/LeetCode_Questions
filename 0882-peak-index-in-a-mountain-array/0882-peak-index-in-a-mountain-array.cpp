class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int s=arr.size();

        // for(int i=0; i<=s-2; i++){
        //     if(arr[i]>arr[i+1] && arr[i]>arr[i+1])
        //        return i;
        // }
        // return 0;

    //     int s=arr.size();
    //     int lo=0;
    //     int hi=s-1;

    //     while(lo<=hi){
    //         int mid=lo+(hi-lo)/2;

    //         if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
    //            return mid;
    //         else if(arr[mid]<arr[mid+1])
    //            hi=mid-1;
    //         else
    //           lo=mid+1;
    //     }
    //     return 0;
        int s=arr.size();
        int lo=1;
        int hi=s-2;

        while (lo<=hi) {
            int mid =lo+(hi-lo)/2;

            if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) {
                return mid;
            } else if(arr[mid]<arr[mid+1]) {
                lo=mid+1;
            } else {
                hi = mid-1;
            }
        }
        return -1; // Peak not found
    }
};