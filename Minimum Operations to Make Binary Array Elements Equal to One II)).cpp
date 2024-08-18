https://www.youtube.com/watch?v=uzL_8rVF4rw
class Solution {  
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), i = 0, flips = 0;
        while(i < n){
            if (flips % 2 == 1){
                nums[i] = !nums[i];  // Flip the number if flips are odd
            }
            // No else part needed, nums[i] remains unchanged if flips are even

            if(nums[i] == 0){
                flips++;
            }
            i++;
        }
        return flips;
    }
};
