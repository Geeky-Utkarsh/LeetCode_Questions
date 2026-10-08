class Solution {
public:
    string removeDuplicates(string s) {

        while(true){

              int dup=-1;

              for(int i=1; i<s.size(); i++){
                if(s[i] == s[i-1]){
                    dup=i;
                    break;
                } 
              }
              if(dup==-1)
                 return s;  // no duplicates-found , return s

             // erasing those 2  indexes 
            s.erase(dup - 1, 2);
        }
        return s;
    }
};