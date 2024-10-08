class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; 
        int maxProfit = 0; //  maxProfit to 0
        for(auto&price : prices){
            if(price < minPrice){
                minPrice = price; // Update minPrice if the current price is lower
            } else {
                maxProfit = max(maxProfit, price - minPrice); 
            }
        }

        return maxProfit;
    }
};
