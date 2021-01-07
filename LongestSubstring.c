int maximum(int a,int b){
    if(a>b)return a;
    return b;
}

int lengthOfLongestSubstring(char * s){
    if(s==NULL)return 0;
    int arr[256]={0};
    int max=0;
    char* begin=s,*end=s;
    while(*end){
        if(arr[*end]){
            max=maximum(max,end-begin);
            while(*begin!=*end)arr[*begin++]=0;
            begin++;
            end++;
        }
        else{
            arr[*end++]=1;
        }
    }
  
    return maximum(max,end-begin);

}
