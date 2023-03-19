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
    ListNode* partition(ListNode* head, int x) {
    
    ListNode *tmp=head;   
    ListNode *large=new ListNode(0);
    ListNode *small=new ListNode(0);
    
    ListNode *l=large;
    ListNode *s=small;
        
   while(tmp)
   {
     if(tmp->val<x)
     {
       small->next=tmp;
        small=small->next;
     }
     
      if(tmp->val>=x)
      {
         large->next=tmp;
        large=large->next;  
      }
       
       
     tmp=tmp->next;  
   }
        
   if(!s->next)
   {
       return l->next;
   }
   if(!l->next)
   {
       return s->next;
   }     
    
    large->next=NULL;
    small->next=l->next;
    return s->next;
    
        
    }
};