

#define MAX 99999
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    
    int arr[MAX]={0},t=0;
    
    int* ret=(int*)malloc(sizeof(int)*(numsSize+1));
   
    for(int i=0;i<numsSize;i++){
        arr[nums[i]]+=1;
    }
    for(int i=1;i<numsSize+1;i++){
        if(arr[i]==0){
            ret[t++]=i;
            
        }
    }
    *returnSize=t;
    return ret;
    
