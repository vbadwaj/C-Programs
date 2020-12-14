

int climbStairs(int n){
    int sol[n+1],i,j;
    if(n==1||n==2||n==3){
        return n;
    }
    for(i=0;i<n;i++){
        sol[i]=0;
    }
    for(i=0;i<=3;i++){
        sol[i]=i;
    }
    for(i=4;i<n+1;i++){
        sol[i]=sol[i-1]+sol[i-2];
        
    }
   
    return sol[n];
}
