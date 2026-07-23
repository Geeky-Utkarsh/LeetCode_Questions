class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
          return true;

        // we will have to find the indexes of mismatching chars in the string 
        int cnt=0, first=-1 , second=-1;


        for(int i=0; i<s1.size(); i++){
            if(s1[i]!=s2[i]){
                cnt++;
                if(cnt==1)
                   first=i;
                if(cnt==2)
                  second=i;
            }
        }
        if(cnt>2 || cnt==1) //check if more than 2 mismatching chars are there
        return false;

        swap(s1[first], s1[second]);

        if(s1==s2)
          return true;
        return false;           
    }
};