

int maxProfit(int* prices, int pricesSize){
    int prev=prices[0];
    int i,profit=0;
    
    for(i=1;i<pricesSize;i++){
        if(prices[i]>prev){
            profit=profit+prices[i]-prev;
            
        }
        prev=prices[i];
        
    }
    return profit;

}
