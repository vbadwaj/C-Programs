int compare (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    if(gSize==0||sSize==0)return 0;
    int count=0,i=0,j=0;
    qsort(s,sSize,sizeof(int),compare);
    qsort(g,gSize,sizeof(int),compare);
    for(i=0;i<sSize && j<gSize;i++){
        if(s[i]>=g[j]){
            
            count++;
            j++;
        }
       
    }
   
   
       
   
    return count;

}
