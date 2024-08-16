class Solution {
public:
    int minSwaps(string s) {
        int balance = 0;
        int maxImbalance = 0;
        for(auto&c : s){
            if (c == '['){
                balance++;
            }else{
                balance--;
            }
            // Track the maximum imbalance (most negative balance)
          maxImbalance = min(maxImbalance, balance);
        }

        // The minimum number of swaps is the ceiling of half of the maximum imbalance
        // Since maxImbalance is negative, we use -maxImbalance
        return (-maxImbalance + 1) / 2;
    }
};
