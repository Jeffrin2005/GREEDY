#include <vector>
#include <algorithm>

class Solution {
public:
    int fillCups(std::vector<int>& amount) {
        int seconds = 0;
        // Sort the array to make the two largest elements accessible at the end
        std::sort(amount.begin(), amount.end());
        // Continue until all cups are filled
        while (amount[2] > 0) {
            // If the second largest amount is also greater than 0, fill both
            if (amount[1] > 0) {
                amount[1]--;
                amount[2]--;
            } else {
                // Otherwise, fill only from the largest amount
                amount[2]--;
            }
            // Increment the number of seconds
            seconds++;
            // Sort again to maintain the order
            std::sort(amount.begin(), amount.end());
        }

        return seconds;
    }
};
