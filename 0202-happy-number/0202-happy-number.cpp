class Solution {
public:
    int digit_square_sum(int n){
        int res=0;

        while(n!=0){
            int last_digit=n%10;
            res=res+pow(last_digit,2);

            n=n/10;
        }
        return res;
    }
    bool isHappy(int n){
/* 
        A happy number is a number that eventually reaches 1 when you repeatedly replace the number by  
        the sum of the squares of its digits. If this process ends in 1, the number is happy; 
        otherwise, 
        it will enter a cycle that doesn’t include 1, and the number is called unhappy or sad.
*/  
    // according to the above condition we have check 2 things
    // 1st -> If a number eventually reaches 1 after each square digit summing
    // 2nd -> If 1st , condition is not satisfied then it will enter in a cycle that does not include 1so we have to check if a cycle exits or not 

    unordered_set<int>st;
    int square_sum=0;

    while(n!=1){
        square_sum=digit_square_sum(n);

        if(st.find(square_sum)!=st.end()){
            // it that same number which  is present in set is found again so there is a cycle 
            return false;
        }
        st.insert(square_sum);

        n=square_sum;
    }
    return true;
          
    }
};