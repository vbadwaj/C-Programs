int maximum(int a,int b){
    if(a>b)return a;
     return b;
}

int getMaximumGenerated(int n){
    int max=INT_MIN;
    if(n==0)return 0;
    if(n==1)return 1;
    int nums[n+1];
    nums[0]=0;
    nums[1]=1;
    int i=2;
    while(i<n+1){
        if(i%2==0){
            nums[i]=nums[i/2];
            
        }
        else{
            nums[i]=nums[(i-1)/2]+nums[((i-1)/2)+1];
        }
        i++;
        max=maximum(nums[i-1],max);
    }
    return max;
