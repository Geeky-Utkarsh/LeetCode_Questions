class Solution {
public:
    int search(vector<int>& nums, int target) {
        // auto it= lower_bound(nums.begin(), nums.end(), target);
        // int idx=distance(nums.begin(), it);

        // if(it!=nums.end() && *it==target)
        //   return idx;
        // else
        //   return -1;

        int low=0;
        int high=nums.size()-1;

        while(low<=high){
          int mid=(low+high)/2;

          if(nums[mid]==target) return mid;
          else if(nums[mid]<target) low=mid+1;
          else if(nums[mid]>target) high=mid-1;
          // else if (nums[mid] < target) low = mid + 1;  // Increase low
          // else if (nums[mid] > target) high = mid - 1; // Decrease high
        }
        return -1;
    }
};