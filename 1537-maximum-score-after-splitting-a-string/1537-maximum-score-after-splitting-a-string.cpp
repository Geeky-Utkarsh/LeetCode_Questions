class Solution{
public:
    int maxScore(string s) {
        // we have to precopute all the value of string
        // both left and right side i.e both prefix and suffix

        int sz=s.size();

        vector<int>left(sz,0), right(sz,0);


        // if(s[0]=='0') 
        //       left[0]=0;
        // else
        //    left[0]=1;

        left[0]= (s[0] == '0');
        right[sz-1]= (s[sz-1] == '1');

        // now doing prefix sum 
        for(int i=1; i<sz; i++){
            left[i]=left[i-1]+(s[i]=='0');
        }
 
        
        for(int i=sz-2; i>=0; i--){
            right[i]=right[i+1]+(s[i]=='1');
        }

        int maxi=0;
        for(int i=0; i<sz-1; i++){
            maxi=max(left[i]+right[i+1], maxi);
        }
        
        return maxi;
    }
};





class Solution1{
public:
    int maxScore(string s) {

        int sumOne=0;
        for(char ch : s){
            if(ch=='1')
               sumOne++;
        }
        if(sumOne==0)
            return 1;

        int sumZero=0;
        int maxScore=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='0')
              sumZero++;
            else 
              sumOne--;
            
            maxScore=max(maxScore, sumZero+sumOne);
        }

        return maxScore;
    }
};