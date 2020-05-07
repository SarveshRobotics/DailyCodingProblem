class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <=1) return 0;
        int maxProfit = 0;
        int minPrice = prices[0];
        
        for (int i=1; i<prices.size(); i++){
            if (prices[i] < minPrice) minPrice = prices[i];
            else if (prices[i] - minPrice > maxProfit) maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
    
    // int maxProfit(vector<int>& prices) {
    //     if (prices.size() <= 1) return 0;
    //     int profit = 0;
    //     int mincost = prices[0];
    //     for (int i=1; i < prices.size(); i++) {
    //         if (prices[i] < mincost) mincost = prices[i];
    //         if ((prices[i] - mincost) > profit) profit = (prices[i] - mincost); 
    //     }
    //     return profit;
    // }
};
