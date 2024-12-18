class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int good_triplet=0;

        int n=arr.size()-1;

        for(int i=0; i<=n; i++){
            for(int j=i+1; j<=n; j++){
                for(int k=j+1; k<=n; k++){
                    // if(arr[i]!=arr[j] && arr[i]!=arr[k] && arr[j]!=arr[k])
                    //   triplet_count++;
                    int x=abs(arr[i] - arr[j]);
                    int y=abs(arr[j] - arr[k]);
                    int z=abs(arr[i] - arr[k]);

                    if(x<=a && y<=b && z<=c){
                        good_triplet++;
                    }
                }
            }
        }
        return good_triplet;
    }
};