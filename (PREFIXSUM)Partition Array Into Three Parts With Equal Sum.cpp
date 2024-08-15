// Consider the array [0, 2, 1, -6, 6, -7, 9, 1, 2, 0, 1]. The total sum of the array is 9. Therefore, targetSum = 9 / 3 = 3.
// Prefix Sum Calculation:
// The prefix sums for this array are calculated as follows:
// prefix sum  = // [0, 2, 3, -3, 3, -4, 5, 6, 8, 8, 9]
// Finding Partitions:
// We start with targetCount = 0 and look for segments where the prefix sum matches targetSum * (targetCount + 1).
// 1. First Partition:
// As we iterate, when i = 2, prefixSum[i] = 3.
// We check if 3 == 3 * (0 + 1), which is true.
// Increment targetCount to 1.
// 2. Second Partition:
// Continue searching for 3 * (1 + 1) = 6.
// When i = 7, prefixSum[i] = 6.
// 6 == 3 * (1 + 1), true.
// Increment targetCount to 2.
// 3. Third Partition:
// Continue searching for 3 * (2 + 1) = 9.
// When i = 10, prefixSum[i] = 9.
// 9 == 3 * (2 + 1), true.
// We've found three partitions.
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> prefixSum(n);
        prefixSum[0] = arr[0];
        for(int i = 1; i < n;i++){
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
        int totalSum = prefixSum[n - 1];
        if (totalSum % 3 != 0) return false;
        int targetSum = totalSum / 3;
        int targetCount = 0;
        // We need to find three parts with the sum equal to targetSum
        for (int i = 0; i < n - 1;i++){
            if (prefixSum[i] == targetSum * (targetCount + 1)){
                targetCount++;
                if(targetCount == 2){  // We found two parts, the rest must form the third part
                    return true;
                }
            }
        }
        
        return false;
    }
};
