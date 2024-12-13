class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        int carry=0;

        ListNode*farziNode=new ListNode(-1);        
        ListNode*mover=farziNode;
        
        while( l1 || l2){
            int sum=0;
            sum+=carry;

            if(l1) // checking again as in the while block we have used OR operator
               sum+=l1->val;   
            if(l2) // checking again as in the while block we have used OR operator   
             sum+=l2->val;

            carry=sum/10;

            mover->next=new ListNode(sum%10);
            mover=mover->next;


            if(l1) // checking again as in the while block we have used OR operator
                  l1=l1->next;
            if(l2) // checking again as in the while block we have used OR operator
                  l2=l2->next;
        }
        if(carry>0){
            ListNode*lastnode=new ListNode(carry);
            mover->next=lastnode;
        }
        return farziNode->next;
    }
};