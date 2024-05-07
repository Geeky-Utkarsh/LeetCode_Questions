class Solution {
 private:
    ListNode* reverseList(ListNode* head){

    ListNode*prev=nullptr;
    ListNode*curr=head;
    ListNode*nextNode=nullptr;
    
    while (curr!=nullptr) {
        // Store the next node before modifying the current node's pointer
        nextNode=curr->next;
        // Reverse the pointer of the current node to point to the previous node
        curr->next=prev;
        // Move pointers forward: prev becomes current, current becomes next
        prev=curr;
        curr=nextNode;
    }
      return prev;
  }; 

 public:
    ListNode* doubleIt(ListNode* head) {
        head=reverseList(head);

        ListNode*curr=head;
        ListNode*prev=NULL;

        int carry=0;

        while(curr!=NULL){
            int multiplication=curr->val*2+carry;

            curr->val=multiplication%10;

            if(multiplication>=10)
                carry=1;
            else 
              carry=0;

            prev=curr;
            curr=curr->next;
        }

        // edge case -> if the last carry is 1 and not 0 then we have to add that "1" in extra node 
        if(carry!=0){
            ListNode*new_head=new ListNode(carry);
            prev->next=new_head;
        }

        return reverseList(head);
    }
};