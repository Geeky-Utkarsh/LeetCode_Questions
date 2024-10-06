class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>s(nums.begin(), nums.end()); // making it accessable in O(1) time

        ListNode*tmp=head; // tmp is used to traverse the linked list 

        ListNode*farziNode= new ListNode(0); // initialization of new linked list 
        farziNode->next=head; // making it point to head 

        ListNode*prev=farziNode;

        while(tmp!=NULL){
            int value=tmp->val;

            if(s.find(value)!=s.end()){
                // it means  we have to remove current value from the linked 

                prev->next=tmp->next; // skipping the current node 
            }
            else{
                prev=tmp; // If the value is not in the set, move prev to tmp
            }   
            tmp=tmp->next;
        } 
        return farziNode->next;
    }
};