

int findKthPositive(int* arr, int arrSize, int k){
    if(arrSize==0)return k;
    int* sol=(int*)calloc(10000,sizeof(int));
    int count=0;
    for(int i=0;i<arrSize;i++){
        sol[arr[i]]+=1;
    }
    int i=0;
    for( i=1;i<10000 && count<k;i++){
        if(sol[i]==0)count++;
    }
    free(sol);
    return i-1;
    

}
