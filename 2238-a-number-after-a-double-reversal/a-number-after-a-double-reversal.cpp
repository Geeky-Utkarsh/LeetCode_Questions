class Solution {
private:
        int revD(int n){
            int rev=0;

            while(n!=0){
                int l=n%10;
                rev=(rev*10)+l;

                n=n/10;
            }
            return rev;
        }
public:
    bool isSameAfterReversals(int num) {
        // Handeling the edge case where num=0;
        if(num==0)
           return true;
        
        // now checking if rev(num)==rev(rev(num))
        int temp=num;
        if(revD(revD(num))==temp)
           return true;
        else 
           return false;


        
    }
};