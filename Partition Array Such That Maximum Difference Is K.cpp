#include <vector>
#include <algorithm>

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0; // This will hold the number of subsequences
        int i = 0; // Iterator for the nums array
        while(i < nums.size()){
            count++; // Start a new subsequence
            int start = nums[i]; // The minimum element of the current subsequence
            // Add as many elements as possible to the current subsequence
            while(i < nums.size() && nums[i] - start <= k){
                i++;
            }
        }
        
        return count;
    }
};
