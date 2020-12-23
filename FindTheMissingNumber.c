#define MAX 99999

int missingNumber(int* nums, int numsSize){
    int hash[MAX]={0};
    int val;
    for(int i=0;i<numsSize;i++){
        hash[nums[i]]+=1;
        
        
    }
    for(int i=0;i<numsSize+1;i++){
        if(hash[i]==0)val=i;
        }
   return val;
        
}
