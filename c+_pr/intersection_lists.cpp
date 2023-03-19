ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int len_a = 0;
    int len_b = 0;
    ListNode* temp1 = headA;
    ListNode* temp2 = headB;

    while(temp1!=NULL)
    {
        len_a++;
        temp1 = temp1->next;
    }

    while(temp2!=NULL)
    {
        len_b++;
        temp2 = temp2->next;
    }

    int diff = 0;
    
    if(len_a>len_b)
    {
        diff = len_a-len_b;
        while(diff--)
        {
            headA = headA->next;
        }
    }

    else
    {
        diff = len_b-len_a;
        while(diff--)
        {
            headB = headB->next;
        }
    }
    while(headA!=headB)
    {
        headA = headA->next;
        headB = headB->next;
    }
    return headA;
}
};