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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int len=0;
      ListNode*temp=head;
      // traversing to find the length of the linked list 
      while(temp!=NULL){
          temp=temp->next;
          len++;
      }
      // checking if list has only 1 node then point the head to null so it return NULL/blank list
      if(len==n){
        head=head->next;
        return head;
      }
      // Using formula to find the last nth node from the start of the linked list
      int m=len-n+1;
      int idx=m-1; // address index of the node to be deleted (1-node before the actual one )
      temp=head;
      for(int i=1; i<=idx-1; i++){
          temp=temp->next;
      }
    //now temp is hold the address of (n-1)th node from start se
      
    // removing the nth node from the list
    temp->next=temp->next->next;

    return head;
    }
};