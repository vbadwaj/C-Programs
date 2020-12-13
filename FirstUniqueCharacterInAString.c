

int firstUniqChar(char * s){
    int arr[26]={0},i;
    for(i=0;s[i]!=NULL;i++){
    arr[s[i]-'a']++;
        
    }
    for(i=0;s[i]!=NULL;i++){
    if(arr[s[i]-'a']==1){
        return i;
    }
        
    }
    return -1;
    

}