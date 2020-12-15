struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* right=NULL;
    struct ListNode* left=NULL;
    struct ListNode* curr=head;
    while(curr!=NULL){
        right=curr->next;
        curr->next=left;
        left=curr;
        curr=right;
    }
    if(right!=NULL){
        head->next=reverseList(right);
    }
    return left;
}
