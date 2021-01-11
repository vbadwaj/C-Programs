int min(int a,int b){
    if(a>b)return b;
    else
    return a;
}

int minCostClimbingStairs(int* cost, int costSize){
    if(costSize<=3)return min(cost[0],cost[1]);
    int* pay=(int*)malloc((costSize)*sizeof(int));
    pay[0]=cost[0];
    pay[1]=cost[1];
    for(int i=2;i<(costSize);i++){
        pay[i]=cost[i]+min(pay[i-1],pay[i-2]);
    }

    return min(pay[costSize-2],pay[costSize-1]);
    
    

}
