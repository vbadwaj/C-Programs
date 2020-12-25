struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head==NULL)return NULL;
    if(head->next==NULL)return head;
    struct ListNode* t=head;
    while(head->next!=NULL){
        if(head->val==head->next->val){
            head->next=head->next->next;
        }
        else head=head->next;
    }
    return t;
}
