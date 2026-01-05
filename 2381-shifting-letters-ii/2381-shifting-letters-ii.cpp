// class Solution1{
// public:
//     char shiftForward(char c, int steps) {
//         return 'a'+(c-'a'+steps)%26;
//     }

//    char shiftBackward(char c, int steps) {
//          return 'a'+(c-'a'--steps+26)%26;
//      }

    
//     string shiftingLetters(string s, vector<vector<int>>& shifts) {
//         // Brute force approach 
//         int n=s.size();

//         for(vector<int>shift : shifts){
//             int start=shift[0], end=shift[1], dir=shift[2];

//             if(dir==1){ // shift forward 
//                for(int i=start; i<=end; i++){
//                 s[i]=shiftForward(s[i],1);
//                }
//             }
//             else{  // shift backwards
//             for(int i=start; i<end+1; i++){
//                 s[i]=shiftBackward(s[i],1);
//                }
//             }
//         }
//         return s;
//     }
// };

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        // Using line sweep algo 
        int n=s.size();

        vector<int>arr(n,0);

        for(vector<int>shift : shifts){
            if(shift[2]==1){  // forward shifting 
              arr[shift[0]]++;
              if(shift[1]+1<n)
                arr[shift[1]+1]--;
              
            }
            if(shift[2]==0){
              arr[shift[0]]--;

              if(shift[1]+1<n)
                arr[shift[1]+1]++;
            }
        }
        // creating the shifted string now 
        int sum=0;
        for(int i=0; i<n; i++){
            sum=(sum+arr[i])%26;

            if(sum<0) 
              sum+=26;
            
            // char shifting=(char) ('a'+((s[i]-'a'+sum) % 26));
            s[i]='a'+(s[i]-'a'+sum)%26;
        }
        return s;
    }
};