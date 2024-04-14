class Solution {
public:
    void reversePart(int i, int j, vector<int>&v){
        while(i<=j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        if(k>n)
           k=k%n;
        if(k==n)
           return;
        // part 1 reverse
        reversePart(0,n-k-1,nums);
        // part 2 reverse
        reversePart(n-k,n-1,nums);
        // Complete reverse
        reversePart(0,n-1,nums);
    }
};