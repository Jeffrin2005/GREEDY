class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        // Sort the costs in ascending order
        sort(costs.begin(), costs.end());
        
        int count = 0; // To count the number of ice creams bought
        for (int i = 0; i < costs.size(); i++) {
            if (coins >= costs[i]) {
                coins -= costs[i]; // Subtract the cost from the coins
                count++;           // Increment the count of ice creams bought
            } else {
                break; // If not enough coins to buy the next ice cream, break out of the loop
            }
        }
        return count;
    }
};
