class Solution1{
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>&o) {
        // mapping the operation into an unordered map 

        unordered_map<int,int>f;

        for(int i=0; i<o.size(); i++){
            int element=o[i][0];
            int replace=o[i][1];

            f[element]=replace;
        }
        // Now , we will be checking and swapping nums by looping up from map 
        for(int i=0; i<nums.size(); i++){
            if(f.find(nums[i])!=f.end()){
                nums[i]=f[nums[i]];
            }
        }

        return nums;
    }
};

class Solution{
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>&o) {
        // mapping the operation into an unordered map 

        unordered_map<int,int>f;

        for(int i=0; i<nums.size(); i++){
            f[nums[i]]=i; // mapping the element of num array with there position i 
        }

        // now replace the values in the nums by using map z 
        for(int i=0; i<o.size(); i++){
            int k=f[o[i][0]];
            f.erase(o[i][0]);

            nums[k]=o[i][1];
            f[o[i][1]]=k;
        }
        return nums;
    }
};