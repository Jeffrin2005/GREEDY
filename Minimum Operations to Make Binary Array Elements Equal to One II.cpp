
class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        int flipCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = (nums[i] + flipCount) % 2;
            if (nums[i] == 0) {
                nums[i] = 1;
                flipCount++;
            }
        }
        return flipCount;
    }
};
