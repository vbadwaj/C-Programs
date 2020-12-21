

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int mini(int a,int b){
    if(a>b)return b;
    else return a;
}
int maxi(int a,int b){
    if(a>b)return a;
    else return b;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    if(numsSize==0){
        int *t=(int*)malloc(2*sizeof(int));
            t[0]=t[1]=-1;
             * returnSize=2;
              return t;}
    int *res=(int*)malloc((numsSize+numsSize)*sizeof(int));
    
    int i,j=0,count=0,min=INT_MAX,max=INT_MIN;
    for(i=0;i<numsSize;i++){
        res[i]=-1;
    }
    for(i=0;i<numsSize;i++){
        if(nums[i]==target){
            res[i]=res[i]+1;
            count++;
            
        }
    }
   
    for(i=0;i<numsSize;i++){
        printf("%d\n",res[i]);
        if(res[i]==0){
            
            min=mini(i,min);
            max=maxi(i,max);
            printf("min:%d \t max:%d\n",min,max);
        }
       
        
    }
        res[0]=min;
        res[1]=max;
    
    if(count==0){res[1]=res[0]=-1;}
    *returnSize=2;
    return res;
    
    

}
