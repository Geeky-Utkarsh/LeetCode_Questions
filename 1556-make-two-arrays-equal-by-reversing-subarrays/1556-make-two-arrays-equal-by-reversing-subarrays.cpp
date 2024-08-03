class Solution1{
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        for(int i=0; i<arr.size(); i++){
            if(arr[i]!=target[i])
               return false;
        }
        return true;
    }
};

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Solution{
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // using Frequnecy array 
        int f[1001]={0};

        // mapping element into frequency array 
        for(int &e : arr){
            f[e]++;
        }
        // now checking the frequency aray f for each element 
        for(int &e : target){
            f[e]--;
        }

        for(int &e : f){
            if(e!=0)
               return false;
        }
        return true;
    }
};