class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b){
            if(a%2==0 && b%2!=0) // sorting even numbers before odd
              return true;
            else if(a%2!=0 && b%2==0) // sorting odd numbers after even 
              return false;
            else // for 2 even or odd number maintain their relative order 
             return a<b;
        });

        return nums;

        // vector<int>even;
        // vector<int>odd;

        // for(auto e : nums){
        //     if(e%2==0)
        //       even.push_back(e);
        //     else{
        //         odd.push_back(e);
        //     }
        // }
        // even.insert(even.end(),odd.begin(),odd.end());
        // return even;
    }
};