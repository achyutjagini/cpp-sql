/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
   ListNode *temp1,*temp2=NULL;
    temp1=headA;
    temp2=headB;

    unordered_map<ListNode *,int> um;

    while(temp1)
    {
        um[temp1]=temp1->val;
        temp1=temp1->next;
    } 

    while(temp2)
    {
      for(auto m: um){
        // m.first is the key and m.second is the value 
        if(m.first==temp2)
            return temp2;
      }
         temp2=temp2->next;
    }
   return NULL;
 

    }
}; 
