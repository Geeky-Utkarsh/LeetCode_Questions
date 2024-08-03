class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
    //     int f1[target.size()+1]={0};
    //     int f2[target.size()+1]={0};

    //     // mapping the elements of the array arr into frequency array f1
    //     for(auto &e : arr){
    //         f1[e]++;
    //     }
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());

        for(int i=0; i<arr.size(); i++){
            if(arr[i]!=target[i])
               return false;
        }
        return true;
    }
};