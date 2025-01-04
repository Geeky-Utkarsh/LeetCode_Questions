class Solution {
public:
    int countPalindromicSubsequence(string s) {
        // we have to use  a map to store key={first_idx,last_idx} and then use set to count the unique element between first and last
        unordered_map<char,pair<int,int>>mp;
        // Propagating map with -1 
        for(int i='a'; i<='z'; i++){
            mp[i]={-1,-1};
        }

        // mapping 1st occurrence (i.e from L to R)
        for(int i=0; i<s.size(); i++){
            char ch=s[i];
            if(mp[ch].first==-1)
               mp[ch].first=i;
        }
        // mapping last occurrence (i.e from R to L)

        for(int i=s.size()-1; i>=0; i--){
            char ch=s[i];
            if(mp[ch].second==-1)
              mp[ch].second=i;
        }
        // we will traverse first occurrence idx to last occurrence idx , and check if there is atleast 1 unique element or not 
        // if there is a 1 unique element then , increment the count of palindrome 

        int count=0;

        for(auto m : mp){

            int start=m.second.first;
            int end=m.second.second;

            if(start!=-1 && end!=-1 && start<end){
                unordered_set<int>stt;

                for(int i=start+1; i<end; i++){
                    stt.insert(s[i]);
                }
                // now we will check if there is atleast 1 unique element so that we can get our middle element of palindrome 
                count+=stt.size();
            }
        }
        return count;
    }
};