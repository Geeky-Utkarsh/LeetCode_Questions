/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head==NULL || head->next==NULL) return nullptr;
        // finidng middle index of linked list before Tc->O(n)

        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*slowPrev=nullptr;

        while(fast!=NULL && fast->next!=NULL){
            slowPrev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        // now slow pointer is at the middle

        // remove the mid node 
        // if(slowPrev!=NULL){
        // slowPrev->val=slow->next->val;
        slowPrev->next=slow->next;
        // }
        // slowPrev=slow->next;
        return head;
    }
};


