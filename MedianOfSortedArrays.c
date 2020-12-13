

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i,j=0,k=0;
    int max[nums1Size+nums2Size];
    for(i=0;i<(nums1Size+nums2Size);i++){
        if(j>=nums2Size){
            max[i]=nums1[k];
            k++;
        }
        else if(k>=nums1Size){
            max[i]=nums2[j];
            j++;
            
        }
        else if(nums2[j]>nums1[k]){
            max[i]=nums1[k];
            k++;
        }
        else{
            max[i]=nums2[j];
            j++;
        }
    }
    if((nums1Size+nums2Size)%2==0){
       return (max[(nums1Size+nums2Size)/2]+max[(nums1Size+nums2Size)/2-1])/2.0;
       
    }
    else{
        return max[(nums1Size+nums2Size)/2];
        
    }
}
