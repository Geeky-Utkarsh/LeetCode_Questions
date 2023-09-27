// class Solution{
// public:
// 	string decodeAtIndex(string s, int k){
// 		long long ind=0;
// 		long long len=0;
// 		for(int i=0; i<s.size(); i++){
// 			if(isdigit(s[i])){
// 				len*=(s[i]-'0');
// 				ind*=(s[i]-'0');
// 			}
// 			else{
// 				len++;
// 				ind++;
// 			}
// 		}
// 		for(int i=s.size()-1; i>=0; i++){
// 			if(isdigit(s[i])){
// 				int digit=s[i]-'0';
// 				len/=digit;
// 				ind/=digit;
// 				k%=ind;
// 			}
// 			else{
// 				if(k==0 || k==ind){
// 					string ans="";
// 					ans+=s[i];
// 					return ans;
// 				}
// 				len--;
// 				ind--;
// 			}
// 		}
// 		return "";
// 	}
// };
class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long len = 0;
        
        // Calculate the total length of the decoded string.
        for (char c : s) {
            if (isdigit(c)) {
                int digit = c - '0';
                len *= digit;
            } else {
                len++;
            }
        }
        
        // Start from the end of the string and backtrack to find the kth character.
        for (int i = s.size() - 1; i >= 0; i--) {
            char c = s[i];
            k %= len; // Reduce k by the length at this position.
            
            if (k == 0 && isalpha(c)) {
                string result = "";
                result += c;
                return result;
            }
            
            if (isdigit(c)) {
                int digit = c - '0';
                len /= digit;
            } else {
                len--;
            }
        }
        
        return "";
    }
};
