class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;

        int mm=-1, mx=-1, idx=0; 

        for(int e : nums){
            if(e>max){
                max=e;
                mx=idx;
            }  
            if(e<min){
                min=e;
                mm=idx;
            }   
            idx++;
        }
        unordered_set<int>lookup={nums.begin(), nums.end()}; // O(1) Look-Up
        vector<int>r;

        // Checking between the range;
        for(int i=min+1; i<=max-1; i++){
            if(lookup.find(i)==lookup.end()){
                r.push_back(i);
            }
        } 
        return r;
        
    }
};