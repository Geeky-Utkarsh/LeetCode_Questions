class Solution {
public:
    // squareLambda=[](int x){ 
    //       return square(x); 
    // };
    // std::function<int(int)> squareLambda = [](int x) -> int {
    //     return x * x;
    // };

    vector<int> sortedSquares(vector<int>& nums) {
        // transform(nums.begin(), nums.end(), [](int x){
        //     return x*x;
        // });
        std::transform(nums.begin(), nums.end(), nums.begin(), [](int x) {
        return x * x;
    });

        sort(nums.begin(), nums.end());

        return nums;
    }
};




// Line 7: Char 60: error: reference to non-static member function must be called
    // 7 |         transform(nums.begin(), nums.end(), result.begin(),square);
    //   |        