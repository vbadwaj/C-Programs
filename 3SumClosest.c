int compare(const void* a,const void* b){
    return(*(int*)a - *(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target){
    int diff=INT_MAX;
   qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0;i<numsSize && diff!=0;++i){
        int l=i+1;
        int h=numsSize-1;
        while(l<h){
             int s=nums[i]+nums[l]+nums[h];
             if(abs(target-s)<abs(diff))diff=target-s;
             if(s<target)++l;
             else --h;
            
        
        }
    }
    return target-diff;
}
