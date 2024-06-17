class Solution {
private:
    bool brute_force(int c){
        for(int a=0; a<=pow(c,0.5); a++){
            for(int b=0; b<=pow(c,0.5); b++){
                if(a*a+b*b==c)
                  return true;
            }
        }
        return false;
    };

public:
    bool judgeSquareSum(int c){
        // Using 2 pointer approach 
        int a=0;
        int b=pow(c,0.5);

        while(a<=b){
            // long long int target=a*a+b*b;
            long long int target = static_cast<long long int>(a) * a + static_cast<long long int>(b) * b;

            if(target==c){
                return true;
            }
            else if(target<c){
                a++;
            }
            else{
                b--;
            }
        }
        return false;
    }
};