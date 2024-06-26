class Solution {
public:
    bool areNumbersAscending(string s) {
        // tokenizing the lists of tokens 
        vector<int>r;

        stringstream iss(s);
        string temp="";

        while(iss>>temp){
        
           // now checking if temp string contains all number or not 
           bool isNumber=true;
           for(char c : temp){
             if(!isdigit(c)){
                isNumber=false;
                break;
             }
           }
            //If temp is a number, convert it to int and push to vector
            if(isNumber) {
                r.push_back(stoi(temp));
            }
        }

        // checking if all the numbers in s are strictly increasing from left to right 
        for(int i=0; i<r.size()-1; i++){
            if(r[i]>=r[i+1])
              return false;
        }      
        return true;
    }
};