

bool canJump(int* nums, int numsSize){
    int i,max=nums[0];
    
    if(nums[0]==numsSize-1)return true;
    if(nums[0]==0 && numsSize>1)return false;
    for(i=1;i<numsSize;i++){
        max--;
        if(nums[i]>max)max=nums[i];
        else if(nums[i]==0 && max==0)return false;;
        if(i+max>=numsSize-1)return true;
        
    }

  return true;

}
