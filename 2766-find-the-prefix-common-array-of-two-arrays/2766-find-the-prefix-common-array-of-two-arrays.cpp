class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {

        // Frequency Array based Approach 
        
        int n=A.size();
        vector<int>prefix_common(n,0);
        vector<int>f(n+1,0);

        int common_cnt=0;

        for(int i=0; i<n; i++){
            f[A[i]]++;

            if(f[A[i]]==2)  // means this number has occurred twice 
             common_cnt++;
            
            f[B[i]]++;

            if(f[B[i]]==2) // means this number has occurred twice 
             common_cnt++;
            
           prefix_common[i]=common_cnt;       
        }
        return prefix_common;
    }
};