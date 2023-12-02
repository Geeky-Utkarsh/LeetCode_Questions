// class Solution {
// public:
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         int idx=1;
//         int firstIdx=-1;
//         int lastIdx=-1;

//         ListNode*a=head;
//         ListNode*b=head->next;
//         ListNode*c=head->next;

//         if(c==NULL) return {-1,-1};

//         int minD=INT_MAX;
//         int f=-1;
//         int s=-1;

//         while(c!=NULL){
//            if((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val)) {

//             // maxd
//             if (firstIdx==-1)
//                     firstIdx=idx;
//            else 
//              lastIdx=idx;

//         // mind 
//         f=s;
//         s=idx;

//         if (f!=-1) {
//             int d=s-f;
//             minD=min(minD,d);
//         }
//     }
//     a = a->next;
//     b = b->next;
//     c = c->next;
//     idx++;
// }
        
//     if(lastIdx==-1) return {-1,-1};
//     int maxD=lastIdx-firstIdx;

//     return {minD, maxD};
//     }
// };
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
            return {-1, -1};

        int idx=1;
        int firstIdx=-1;
        int lastIdx=-1;

        ListNode* a=head;
        ListNode* b=head->next;
        ListNode* c=head->next->next;

        int minD=INT_MAX;
        int f=-1;
        int s=-1;

        while (c != nullptr) {
            if ((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val)) {
                if (firstIdx==-1)
                    firstIdx=idx;
                else
                    lastIdx=idx;

                f=s;
                s=idx;

                if (f!=-1) {
                    int d=s-f;
                    minD=min(minD, d);
                }
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }

        if (lastIdx==-1)
            return {-1,-1};

        int maxD=lastIdx-firstIdx;

        return {minD,maxD};
    }
};