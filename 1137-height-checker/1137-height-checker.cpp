class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected(heights.begin(), heights.end());

        // now we have to do cyclic sort on the expected height array and then count the missmatched value
        sort(expected.begin(), expected.end());

        int count=0;

        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=expected[i])
              count++;
        }
        return count;
    }
};