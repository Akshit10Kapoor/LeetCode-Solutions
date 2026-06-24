int maxProfit(int* prices, int pricesSize) {
    int min=prices[0];
    int profit = 0;
    int maxProfit = -1;

    if(pricesSize == 1){
        return profit;
    }

    for(int i=1; i<pricesSize; i++){
        if(prices[i] < min){
            min = prices[i];
        }
        profit = prices[i] - min;
        if(profit > maxProfit){
            maxProfit = profit;
        }

    }
    return maxProfit;

    
}
