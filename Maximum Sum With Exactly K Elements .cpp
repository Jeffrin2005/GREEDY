
class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int score = 0;
        for (int i = 0; i < k; ++i) {
            // Find the maximum element in the array and use it directly
            int max_val = *max_element(nums.begin(), nums.end());
            
            // Add the maximum element to the score
            score += max_val;
            
            // Find the iterator to the maximum element again for erasing
            auto max_it = max_element(nums.begin(), nums.end());
            
            // Remove the maximum element
            nums.erase(max_it);
            
            // Add max_val + 1 to the end of the vector
            nums.push_back(max_val + 1);
        }
        return score;
    }
};
