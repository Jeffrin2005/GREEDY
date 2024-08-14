

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
       sort(nums.begin(), nums.end()); // Sort the array in non-decreasing order
        for (int i = nums.size() - 3; i >= 0; i--) {
            // Check if the three numbers can form a triangle
            if (nums[i] + nums[i+1] > nums[i+2]){
                // Return the perimeter if the condition is satisfied
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0; 
    }
};
