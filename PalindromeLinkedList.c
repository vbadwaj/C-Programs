
bool isPalindrome(struct ListNode* head){
    int i,j,k=0,l,max=99999;
    int arr[max];
    struct ListNode* temp=head;
    struct ListNode* temp2=head;
  
    while(temp!=NULL){
        temp=temp->next;
        k++;
    }
   
    
    l=k;
    while(head!=NULL){
        arr[--l]=head->val;
        head=head->next;
    }
   
    i=0;
    l=0;
    for(i=0;i<k;i++){
        if(arr[i]==temp2->val){
           l++;
           temp2=temp2->next;
        }
        else{return false;}
    }
    return true;

}