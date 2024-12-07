class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        // we will be uing sorting+2pointer 

        sort(skill.begin(), skill.end());

        int i=0, j=skill.size()-1;
        int n=skill.size();

        long long sum=0;

        long long totalSum=accumulate(skill.begin(), skill.end(), 0LL);

        long long targetSum=totalSum/(n/2);

        if(totalSum%(n/2)!=0) 
            return -1; 

        while(i<j){
            if(skill[i] + skill[j] != targetSum) 
                return -1;

            sum+=skill[i]*skill[j];
            i++;
            j--;
        } 
        return sum;
    }
};