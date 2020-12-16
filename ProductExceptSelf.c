

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize){
    int left=1,right=1,i=0,k=1,j=numsSize-1,t;
    int * sol=(int*)malloc(numsSize*sizeof(int));
    sol[0]=1;
    for(t=1;t<numsSize;t++){
        sol[0]=sol[0]*nums[t];
        
    }
  
    
    
    while(i<=k && j>=k && k<numsSize){
        if(i<k){
        left=left*nums[i];
        i++;
        }
        if(j>k){
            right=right*nums[j];
            j--;
        }
        if(i==k && j==k){
            sol[i]=left*right;
            k++;
            i=0;
            j=numsSize-1;
            left=1;
            right=1;
            
        }
        
    }
    *returnSize=numsSize;
    return sol;
     

}
