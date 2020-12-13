void rotate(int* nums, int numsSize, int k){
    int a[numsSize];
    for(int i = 0; i < numsSize; i++){
        a[(i+k)%numsSize]=nums[i];
      
    } 
    for(int j = 0; j < numsSize; j++){
         nums[j]=a[j];
    }
}