class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode*farziNode=new ListNode(-1);
        farziNode->next=head;

        ListNode *prev=farziNode;
        ListNode *curr=head;

        while(curr!=nullptr){
            if(curr->val==val){
                prev->next=curr->next; // linking the prev next with curr next therefore removing the mid target val node 
                curr=curr->next;   // move to next node 
            }
            else{
               prev=curr;
               curr=curr->next;
            }
        }
        return farziNode->next;
    }
};