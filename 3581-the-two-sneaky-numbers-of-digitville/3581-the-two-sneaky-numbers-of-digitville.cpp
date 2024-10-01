class Solution1{
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // we will using frequency array 
        int f[10]={0};

        for(auto &e : nums){
            f[e]++;
        }

        vector<int>v;

        for(int i=0; i<10; i++){
            if(f[i]==2)
             v.push_back(i);
        }
        return v;
    }
};

class Solution{
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // we will using frequency array 
        unordered_map<int,int>f;

        for(auto &e : nums){
            f[e]++;
        }

        vector<int>v;
        
        for(auto it=f.begin(); it!=f.end(); it++){
            if(it->second==2)
             v.push_back(it->first);
        }
        return v;
    }
};