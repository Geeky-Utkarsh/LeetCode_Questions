class Solution1 {
public:
    ListNode* rev_list(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextNode = nullptr;

        while (curr != nullptr) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head_1=rev_list(l1);
        ListNode*head_2=rev_list(l2);

        int carry=0;
        ListNode*farziNode=new ListNode(-1);
        
        ListNode*mover=farziNode;
        
        while(head_1 || head_2 || carry ){
            int val1 = head_1 ? head_1->val : 0;
            int val2 = head_2 ? head_2->val : 0;


            int sum=(val1+val2)+carry;

            mover->next=new ListNode(sum%10);
            mover=mover->next;

            // if(sum>=10)
            //     carry=1;
            // else 
            //     carry=0;
            carry=sum/10;


            if(head_1) 
                  head_1=head_1->next;
            if(head_2)
                  head_2=head_2->next;
        }
        return rev_list(farziNode->next);
    }
};


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        int carry=0;

        ListNode*farziNode=new ListNode(-1);        
        ListNode*mover=farziNode;
        
        while( l1 || l2){
            int sum=0;
            sum+=carry;

            if(l1){
                sum+=l1->val;
            }

            if(l2){
                sum+=l2->val;
            }

            carry=sum/10;

            mover->next=new ListNode(sum%10);
            mover=mover->next;


            if(l1) 
                  l1=l1->next;
            if(l2)
                  l2=l2->next;
        }
        if(carry>0){
            ListNode*lastnode=new ListNode(carry);
            mover->next=lastnode;
        }
        return farziNode->next;
    }
};