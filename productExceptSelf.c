int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int left[numsSize],right[numsSize];
     left[0]=1;right[numsSize-1]=1;
    for(int i=1;i<numsSize;i++){
        left[i]=left[i-1]*nums[i-1];
    }
    for(int i=numsSize-2;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
    }
    for(int i=0;i<numsSize;i++){
        nums[i]=left[i]*right[i];
    }
    *returnSize=numsSize;
    return nums;
    
     

}
