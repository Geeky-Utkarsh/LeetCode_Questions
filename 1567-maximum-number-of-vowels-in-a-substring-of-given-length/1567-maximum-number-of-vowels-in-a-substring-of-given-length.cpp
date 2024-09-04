class Solution{
    bool chk(char ch){

        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    };
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0, j=0;

        int maxV=0;
        int count=0;

        while(j<n){
            if(chk(s[j]))
              count++;
            
            if(j-i+1==k){
                maxV=max(maxV,count);
                if(chk(s[i]))
                   count--;
                i++;
            }
            j++;
        }
        return maxV;
    }
};