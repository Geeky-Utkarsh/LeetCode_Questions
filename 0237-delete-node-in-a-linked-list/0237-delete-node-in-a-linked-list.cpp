/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* tar){
        tar->val=tar->next->val; // Putting the value in (valuePart i.e val->) of given(node/tar) from 1 ahead node    
        tar->next=tar->next->next; // Putting the value in (nextPart i.e next->) of given(node/tar) from 1 ahead node 

        // In both of these line of codes we are basically doing same thing but with different parts of the given node
        // in 1st line its (val->) part of givn node 
        // in 2nd line its with (next->) part of given node
        // in this way we (unlinking) the just next node of given node from val-> and then from next-> also 

    }
};