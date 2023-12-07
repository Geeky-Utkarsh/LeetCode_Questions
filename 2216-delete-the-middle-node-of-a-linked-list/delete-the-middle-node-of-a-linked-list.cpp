class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head==nullptr || head->next==nullptr)
          return nullptr; // returning an empty list
        
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*prev=head;

        while(fast!=nullptr && fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        if(prev!=nullptr){
            prev->next=slow->next;
        }
        // else{
        //     head
        // }
        // prev->next=slow->next;

        return head;

    }
};