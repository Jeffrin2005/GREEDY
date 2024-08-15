class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end()); 
        int n = piles.size();
        int sum = 0;
        int index = n - 2; // Start from the second largest element in the last triplet
        for (int i = 0; i < n / 3; i++){
            sum+=piles[index]; // Add the second largest element of each triplet to your sum
            index-=2; // Move to the second largest of the next triplet
        }
        return sum;
    }
};
