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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=1;

        // finding the length of the linked list first 
        ListNode*tmp=head;
        int len=0;

        while(tmp!=NULL){
            len++;
            tmp=tmp->next;
        }

        ListNode* left_side=head;
        ListNode* right_side=head;

        for(int i=0; i<k-1; i++){
            left_side=left_side->next;
        }

        for(int i=0; i<len-k; i++){
            right_side=right_side->next;
        }

        // now we have the address of both the desired node
        // So we will swap it 

        swap(left_side->val , right_side->val);

        return head;
    }
};