// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        // Approach -> we will find the length of both lists and then subtract the bigger list's size from smaller one 
        // to equalize both the start pointer so traversal become easy 

        if (!headA || !headB) {
            return nullptr;
        }
        ListNode*tempA=headA;
        ListNode*tempB=headB;

        long long int lenA=0;
        long long int lenB=0;

        while(tempA!=NULL){
            lenA++;
            tempA=tempA->next;
        }

        while(tempB!=NULL){
            lenB++;
            tempB=tempB->next;
        }

        tempA=headA;
        tempB=headB;

        if(lenA>lenB){
            int diff=lenA-lenB;
            for(int i=0; i<diff; i++){
                tempA=tempA->next;
            }
            while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
            }
            return tempA;
        }
        else{
            int diff=lenB-lenA;
            for(int i=0; i<diff; i++){
                tempB=tempB->next;
            }
            while(tempA!=tempB){
                tempA=tempA->next;
                tempB=tempB->next;
            }
            return tempA;
        }
      }
    // }
};
