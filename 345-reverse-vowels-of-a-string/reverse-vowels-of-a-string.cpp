class Solution {

public:
    bool VowelCheck(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
           a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        // using 2 pointer approach 
        int i=0, j=s.size()-1;

        // Handeling edge cases where some vovels are in UpperCase 


        while(i<j){
            if( VowelCheck(s[i]) && VowelCheck(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(VowelCheck(s[i])==false){
                i++;
            }
            else if(VowelCheck(s[j])==false){
                j--;
            }
        }
        return s;

        // TC => O(n)       SC=O(1) auxilary space 
    }
};