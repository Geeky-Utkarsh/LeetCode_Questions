class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        // Approach -> we will make one frequency array which is a common frequency array which will be updated 
        // common[26]={0} 
        // and one temp frequency array which will have occurrence of each word in each iteration 
        // then compare common freq array with the current freq array and update common freq array with minval 
        //                                           i.e common[i]=min(common[i],current[i]);
        // Last step -> copy all common array value (along with its occurrences) in the vector<string>res

        vector<string>res;

        int common[26]={0};

        // Making the frequency of words[0] into common frequency array 
        string w=words[0];

        for(auto ch : w){
            common[ch-'a']++;
        }

        for(int i=1; i<words.size(); i++){
            int current[26]={0};

            // mapping the ith word in current 
            auto curr_word=words[i];

            for(auto &w : curr_word){
                current[w-'a']++;
            }
            // now coparing the current freq array with common freq array and filling ith idx with min val
            for(int j=0; j<26; j++){
                common[j]=min(common[j],current[j]);
            }            

        }
        // now coppying the common frequenct array into vector of string and returning it 
        for(int i=0; i<26; i++){
            int c=common[i];

            while(c--){
                res.push_back(string(1,i+'a'));
            }
        }

        // char ch = 'a';
        //  for (int count : common){
        //      if(count>0){
        //          res.push_back(string(count, ch));
        // }
        // ch++;
    // }

        return res;

    }
};