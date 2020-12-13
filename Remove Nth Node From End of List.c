struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{
    struct ListNode *pred = NULL;
    struct ListNode *temp = head;
    struct ListNode *temp2 = head;
    int count = 0,i = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if(count==1){
        return NULL;
    }
  
    
    while (head != NULL && i < count - n)
    {
        pred = head;
        head = head->next;
        i++;
       
    }
    if((count-n+1)==1){
        return temp2->next;
    }
    else{
    pred->next = head->next;
    head->next = NULL;
    return temp2;
    }
}