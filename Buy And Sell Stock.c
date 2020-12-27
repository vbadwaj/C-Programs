int maxProfit(int* prices, int pricesSize) {
    if(pricesSize == 0){
        return 0;
    }
    int min = prices[0];
    
    

    int profit = 0;
    
    int i;
    for(i = 0; i < pricesSize; i++){
        if(prices[i] > min){
           if(prices[i]-min>profit){
               profit = prices[i]-min;
           }
        }
        if(prices[i]<min){
            min = prices[i];
        }
    }
    return profit;
}
