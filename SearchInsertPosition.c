int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int searchInsert(int* nums, int numsSize, int target){
    int ret=-1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target)ret=i;
    }
    if(ret==-1){
        int* new=(int*)malloc((numsSize+1)*sizeof(int));
        for(int i=0;i<numsSize;i++){
            new[i]=nums[i];
        }
        new[numsSize]=target;
        qsort(new,numsSize+1,sizeof(int),compare);
        for(int i=0;i<(numsSize+1);i++){
        if(new[i]==target)ret=i;
    }
    }
    return ret;
}
