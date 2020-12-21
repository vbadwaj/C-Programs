struct ListNode* swapPairs(struct ListNode* head){
    if(head==NULL )return NULL;
    struct ListNode *curr = head;
    struct ListNode *succ = NULL;
    struct ListNode *prev = NULL;
    int count = 0;
    int k=2;
    while (curr != NULL && count < k)
    {
        succ = curr->next;
        curr->next = prev;
        prev = curr;
        curr = succ;
        count++;
    }
    if (succ != NULL)
    {
        head->next = swapPairs(succ);
    }
    return prev;

}
