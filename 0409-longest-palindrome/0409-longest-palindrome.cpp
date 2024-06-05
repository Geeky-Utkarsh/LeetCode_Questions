class Solution {
public:
    int longestPalindrome(string s) {
        // we will use hashmap based approach 

          // 1> We will first map all the frequency in hashmap 
          // 2> then add the length of all even frequecy occurences 
          // 3> For odd frequency we will sum them up differently 
          // 4> Subtract the even_frequency_sum-odd_frequency_sum
          // 5> Return even_frequency_Sum+1(taking one odd number which will be in between)


          unordered_map<char,int>mp;

          for(char &ch : s){
            mp[ch]++;
          }

          int even_occurrences=0;
          int odd_occurrences=0;

          bool oddFreq=false;


          for(auto &it : mp){
            if(it.second%2==0){ // if the frequency is even then we add length+=2;
                even_occurrences+=it.second;
            }
            else {  // // if the frequency is odd then we add length+=2;
                odd_occurrences+=it.second-1;
                oddFreq=true;
            }
          }
          int length=even_occurrences+odd_occurrences;

          if(oddFreq){ // if one odd frequency character is still remanining then we can add it to center
            length++;
          }

          return length;


    }
};