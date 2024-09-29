class Solution {
public:
    bool equalFrequency(string word) {
        char f[26]={0};

        for(char &e : word){
            f[e-'a']++;
        }
        int first_freq=f[0];
        int count=0;

        for(int i=0; i<26; i++){
            if(f[i]==0)
               continue;            

            f[i]--;  // dowining the current frequency 

            unordered_set<int>size;

            for(auto e : f){
                if(e>0){
                 size.insert(e);
                }
            }
            if(size.size()==1)
               return true;
            
            f[i]++; // restoring the reduced frequency 
        
        }
        return false;
    }
};