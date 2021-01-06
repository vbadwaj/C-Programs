int* nextLargerNodes(struct ListNode* head, int* returnSize){
    if(head==NULL)return NULL;
    int arr[99999];
    int i=0,flag=0;
    *returnSize=0;
    while(head!=NULL){
        arr[i++]=head->val;
        *returnSize+=1;
        head=head->next;
    }
 
    int* sol=(int*)malloc(*returnSize*sizeof(int));
   
    for(i=0;i<*returnSize;i++){
        for(int j=i+1;j<*returnSize;j++){
            if(arr[j]>arr[i]){
                sol[i]=arr[j];
                flag=1;
                break;
            }
            else flag=0;
        }
        if(flag==0)sol[i]=0;
    }
    sol[*returnSize-1]=0;
     
    
    return sol;

}
