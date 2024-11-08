class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int even_cnt=0;

        for(int num : nums){

            // checking now many of them contains an even number of digits 
            // string t=to_string(num);

            // if(t.size()%2==0)
                // even_cnt+=t.size();
            int count=0;

            if(num==0)
               count=1;
            else{

             while(num!=0){
                count++;
                num=num/10;
             }            
           }

           if(count%2==0)
              even_cnt++;
        }
        return even_cnt;
    }
};