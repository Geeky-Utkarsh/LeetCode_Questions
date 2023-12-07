class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        // 2 Pass approach (brute force approach)

        // int len=0;
        // ListNode* temp=head;

        // while(temp!=nullptr){
        //     len++;
        //     temp=temp->next;
        // }
        // temp=head;
        // for(int i=0; i<len/2; i++){
        //     temp=temp->next;
        // }
        // return temp;


        // One Pass approach  by using (slow and fast pointer)
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};