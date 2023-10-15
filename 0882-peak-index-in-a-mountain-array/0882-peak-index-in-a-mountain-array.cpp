class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=arr.size();

        for(int i=0; i<=s-2; i++){
            if(arr[i]>arr[i+1] && arr[i]>arr[i+1])
               return i;
        }
        return 0;
    }
};