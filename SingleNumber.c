int singleNumber(int* nums, int numsSize){
    if(numsSize == 0)
        return 0;
    
    int i, result = nums[0];
    printf("%d",result);

    for(i = 1; i < numsSize; i++) {
       
        result = (result ^ nums[i]);
         printf("\n%d\n",result);
    }

    return result;
}