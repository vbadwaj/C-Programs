

void moveZeroes(int* nums, int numsSize){
    int* hash=(int*)calloc(1000,sizeof(int));
    int next=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[next]=nums[i];
            next++;
            }
        
    }
   
        for(int i=next;i<numsSize;i++){
            nums[i]=0;
        }

}
