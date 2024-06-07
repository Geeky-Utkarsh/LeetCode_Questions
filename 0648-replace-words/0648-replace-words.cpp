class Solution{

public:
    string findRoot(string &word, unordered_set<string>&st){

        for(int l=1; l<=word.size(); l++){
            string root=word.substr(0,l);

            if(st.count(root)){
                return root;
            }
        }
        return word; // returning the same word

    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        // we have to return the string sentence after replacing its (shortest) derivative from the given dictionary 
        // otherwise if the word root is not present in the dictionary then keep that as it as 

        //Approach -> 
        //1> we will copy the dictionary vector<string> into  a unordered_Set to get the access time of O(1) otherwise 
        //    vector<string>dictionary will take O(n)
        // 2> tokenizing each word of the vector<string>& dictionary into string temp one by one 
        // 3> Searching that tokenize into set -> if we can find the smallest matching substring present in the set
        // 4> If we can then find the smallest then return that in place of actual word 
        // 5> If not then return the word as it is i.e unchanged 

        unordered_set<string>st(dictionary.begin(), dictionary.end());

        stringstream ss(sentence);
        string word;

        string res;

        // tokenizing the string with 

        while(getline(ss,word,' ')){

            res+=findRoot(word,st)+" ";

        }


        // removing the last blankspace 
        res.pop_back();
        return res;

    }
};