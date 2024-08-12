class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] <= nums[i - 1]) {
                int required = nums[i - 1] - nums[i] + 1; // Calculate how much increment is needed
                nums[i] = nums[i - 1] + 1; // Update the current element
                operations+=required; // Add the required increments to the total operations
            }
        }
        return operations;
    }
};
