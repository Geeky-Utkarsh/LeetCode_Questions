// class Solution {
// public:
//     char repeatedCharacter(string s) {
//         unordered_map<char,int>mp;

//         for(auto it=s.begin(); it!=s.end(); ++it){
//             mp[*it]++;
//         }

//         char res;
//         for(auto it=s.begin(); it!=s.end(); ++it){
//             if(mp.count(*it)&&mp[*it]==2)
//             res=*it;
//             // break;
//         }
//         return res;
//     }
// };
class Solution{
    public:
         char repeatedCharacter(string s){
             map<char,int>mp;

             char res='\0';
            //  for(int i=0; i<s.size(); i++){
            //      mp[s[i]]++;

            //      if(mp[s[i]]==2)
            //       return s[i];
            //  }
            for(auto it=s.begin(); it!=s.end(); it++){
                mp[*it]++;

                if(mp[*it]==2)
                return *it;
            }
             return -1;
         }         
}; 