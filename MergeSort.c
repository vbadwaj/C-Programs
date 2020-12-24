void merge(int* nums,int l,int m,int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1],R[n2];
       for (int i = 0; i < n1; i++)
        L[i] = nums[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = nums[m + 1 + j];
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            nums[k]=L[i];
            i++;
        }
        else {
            nums[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        nums[k]=L[i];
        i++;
        k++;
    }
     while(j<n2){
        nums[k]=R[j];
        j++;
        k++;
    }
    
    
}
void mergesort(int* nums, int l, int r){
    if(l>=r)return;
   int me=l+(r-l)/2;
    mergesort(nums,l,me);
    mergesort(nums,me+1,r);
    merge(nums,l,me,r);
}

void sortColors(int* nums, int numsSize){
    mergesort(nums,0,numsSize-1);

}
