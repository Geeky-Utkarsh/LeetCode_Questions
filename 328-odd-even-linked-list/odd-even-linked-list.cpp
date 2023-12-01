class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr)
          return head;

        ListNode* odd=head;
        ListNode*even=head->next;

        // Maintaining the even head so its address does not lost 
        ListNode* evenHead = even;

        while(even!=NULL && even->next!=NULL){

            // changing the pointer for odd list 
            odd->next=odd->next->next;
            odd=odd->next;

            // Change pointers for even list 
            even->next=even->next->next;
            even=even->next;
        }

        // Assiging even list at the end of odd list 
        odd->next=evenHead;

        return head;
    }
};