class Solution1 {
public:
    bool buddyStrings(string s, string goal) {
        // if(s==goal)  // strings are already equal 
        //   return false;
    
        
        // now we will do brute force for each idx by swapping each idx with all remaning idx
        for(int i=0; i<s.size(); i++){
            for(int j=i+1; j<s.size(); j++){
                swap(s[i],s[j]);
                if(s==goal)
                  return true;
                  
                swap(s[i],s[j]);
            }
        }
        return false;
    }
};
// Brute Force Gave TLE -> on last few TC 
//---------------------------------------------------------------------------------------------

class Solution {
public:
    bool buddyStrings(string s, string g) {

        if(s.size()!=g.size())
            return false; 
        
        int cnt=0, first=-1, second=-1;

        for(int i=0; i<g.size(); i++){ //finding that idx which is not matching
                if(s[i]!=g[i]){
                    cnt++;
                    if(cnt==1)
                      first=i;

                    if(cnt==2)
                      second=i;
                }
        }  

        if(cnt>2 || cnt==1) // Impossible --> Coz only 1 swap in String S is allowed -->Which can only 2 different chars 
        return false;

        if(first==-1 && second==-1){ // both were allready equal right ? 
           // Now we have to check the duplicates elements , String S should have atleast 1 duplicate element to perform 1 swapping [among themself] to be still equal 
           unordered_set<char>ump;

           for(auto &e : s){
               if(ump.count(e))  // duplicate is found in the string to bear the swapping
                 return true;

               ump.insert(e);
           }
           return false;

        }
        swap(s[first], s[second]);

        if(s==g)
          return true;
        else 
          return false;

    }
        
};