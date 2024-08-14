class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum = 0;
        int itemsPicked = 0;
        // Pick 1s first
        int onesToPick = std::min(numOnes, k);
        sum += onesToPick;  // Each 1 adds 1 to the sum
        itemsPicked += onesToPick;

        // Pick 0s if needed (0s do not affect the sum)
        if(k>0){
        int zerosToPick = std::min(numZeros, k - itemsPicked);
        itemsPicked += zerosToPick;
        }
        if(k > 0){
        // Normally, we avoid picking -1s, but if k is still not reached, we have to pick them
        int negOnesToPick = k - itemsPicked;  // This will only be > 0 if k > numOnes + numZeros
        sum -= negOnesToPick;  // Each -1 subtracts 1 from the sum
        }

        return sum;
    }
};
