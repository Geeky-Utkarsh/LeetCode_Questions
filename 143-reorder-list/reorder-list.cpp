class Solution {
public:
        ListNode* reverseList(ListNode* head){
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*Next=head;

        while(curr){
          Next=curr->next;
          curr->next=prev;

          // For next round
          prev=curr;
          curr=Next;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        // slow is at the left middle / middle
        ListNode*b=reverseList(slow->next);
        ListNode*a=head;
        slow->next=NULL; // for breaking the list 

        // merging these two a and b alternatively 
        ListNode*c= new ListNode(51);
        ListNode*tempc=c;
        ListNode*tempa=a;
        ListNode*tempb=b;

        while(tempa && tempb){
            tempc->next=tempa;
            tempa=tempa->next;

            tempc=tempc->next;
            tempc->next=tempb;

            tempb=tempb->next;
            tempc=tempc->next;
        }
        tempc->next=tempa;
        head=c->next;
    }
};