int max(int a,int b){
    if(a>b) return a;
    return b;
}
int min(int a,int b){
    if(a>b) return b;
    return a;
}

int trap(int* height, int heightSize){
    if(heightSize==0){
        return 0;
    }
    int l[heightSize],r[heightSize],level=0,i;
    l[0]=height[0];
    r[heightSize-1]=height[heightSize-1];
    for(i=1;i<heightSize;i++){
        l[i]=max(l[i-1],height[i]);
    }
    for(i=heightSize-2;i>=0;i--){
        r[i]=max(r[i+1],height[i]);
    }
    for(i=0;i<heightSize;i++){
        level+=min(l[i],r[i])-height[i];
    }
    return level;
    

}