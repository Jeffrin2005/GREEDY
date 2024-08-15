// Example to Illustrate k % 2 == 0:
// Input: nums = [2, -3, 0, 5] and k = 4
// Steps:
// Sort the Array: nums = [-3, 0, 2, 5].
// Negate the Smallest Elements:
// Negate -3 to get nums = [3, 0, 2, 5], k = 3.
// Handle Remaining k:
// Since k is odd (3), negate the smallest absolute value 0 (though negating 0 has no effect), k = 2.
// 4. Even k Remaining:
// Now k = 2, which is even. You can choose any element and negate it twice. For instance, negating 2 twice will make it -2 and then back to 2.
// 5. Calculate the Sum: 3 + 0 + 2 + 5 = 10.
class Solution {
public:
    int largestSumAfterKNegations(std::vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < 0 && k > 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        if (k % 2 == 1) {
                       sort(nums.begin(),nums.end());
                 nums[0] *= -1;

        }
        int sum = 0;
        for (auto& num : nums) {
            sum += num;
        }

        return sum;
    }
};
