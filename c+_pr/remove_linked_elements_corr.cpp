class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
     if(!head)
         return head;
        if(head->val!=val){
                        head->next = removeElements(head->next, val);
            return head;

        }
        else
            return removeElements(head->next, val);
    }
};