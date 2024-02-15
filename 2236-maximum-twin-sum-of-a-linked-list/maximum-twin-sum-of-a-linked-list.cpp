class Solution {
public:
    int pairSum(ListNode* head) {
        int len=0;

        vector<int>vals;
        while(head){
            len++;
            vals.push_back(head->val);
            head=head->next;
        }   

        int ans=0;

        for(int i=0; i<len/2; i++){
            ans=max(ans,vals[i]+vals[len-i-1]);
        }

        return ans;
    }
};