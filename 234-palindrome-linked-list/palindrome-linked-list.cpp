class Solution {

private:
       ListNode* reversedLinkedList(ListNode *head){
           ListNode*prev=nullptr;
           ListNode*current=head;

           while(current){
               ListNode*nextNode=current->next;
               current->next=prev;
               prev=current;
               current=nextNode;
           }
           return prev;
       };
public:
    bool isPalindrome(ListNode* head) {
        if(!head)
          return true; // empty list is also a palindrome 
        
        ListNode*slow=head;
        ListNode*fast=head;

        // Finding the middle of the linked list 
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        // Reversing the second half of the linked list 
        ListNode* secondHalf=reversedLinkedList(slow->next);
        slow->next=nullptr; // spliting the list into 2 halves 

        // Comparing the first and reversed second halves 
        ListNode*p1=head;
        ListNode*p2=secondHalf;

        while(p2){
            if(p1->val != p2->val){
                return false;
            }
            p1=p1->next;
            p2=p2->next;
        }
        return true;

        // ListNode *temp=head;        
        // while(temp!=nullptr){
        //     val=val+to_string(temp->val);
        //     temp=temp->next;
        // }

        // // now we will check if the val is palindrome or not
        // string rev=val;
        // reverse(val.begin(), val.end());

        // return val==rev;
    }
};