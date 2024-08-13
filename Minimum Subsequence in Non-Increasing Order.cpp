class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        // Sort the array in non-increasing order
        sort(nums.rbegin(), nums.rend());
        int totalSum = accumulate(nums.begin(),nums.end(),0LL);
        vector<int>result;
        int subsequenceSum = 0;
        int remainingSum = totalSum;
        // Add elements to the subsequence until its sum is greater than the remaining sum
        for(auto&num : nums){
            subsequenceSum+=num;
            remainingSum-=num;
            result.push_back(num);
            // Check if the subsequence sum is now greater than the remaining sum
            if(subsequenceSum > remainingSum){
                break;
            }
        }

        return result;
    }
};
