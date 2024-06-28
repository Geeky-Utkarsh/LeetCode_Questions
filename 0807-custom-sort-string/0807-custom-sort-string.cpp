class Solution {
public:
    string customSortString(string order, string s) {

        // Approach -1> by using lambda function 
        vector<int>index(26,-1);

        //appending all the elements of the order string into the frequency vector
        for(int i=0; i<order.size(); i++){
            char ch=order[i];
            index[ch-'a']=i;
        }
        auto myComparator=[&index](char &ch1, char &ch2){
            return index[ch1-'a']<index[ch2-'a'];
        };

        sort(begin(s), end(s), myComparator);

        return s;
    }
};