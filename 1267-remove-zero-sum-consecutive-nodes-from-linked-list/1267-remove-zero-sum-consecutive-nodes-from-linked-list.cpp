class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
       ListNode *dum=new ListNode(0);
       dum->next=head;

       head=dum;
       
       unordered_map<int,ListNode*>p_sum;

       int pre=0;
       for(ListNode *i=head; i!=nullptr; i=i->next){
        pre=pre+i->val;
        p_sum[pre]=i;
       }

       pre=0;

       for(ListNode* i=head; i!=nullptr; i=i->next){
         pre=pre+i->val;
         i->next=p_sum[pre]->next;
       }
       head=head->next;
       return head;
    }
};