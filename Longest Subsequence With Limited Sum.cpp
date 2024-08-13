class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        // Sort the nums array to facilitate the greedy approach
        sort(nums.begin(), nums.end());
        // Prepare the result vector with the same size as queries
        vector<int> result(queries.size());
        // Process each query
        for (int i = 0; i < queries.size(); ++i) {
            int current_sum = 0;
            int count = 0;
            // Try to add as many numbers as possible without exceeding the query value
            for (auto&num : nums){
                if (current_sum + num > queries[i]){
                    break; // Stop if adding this number exceeds the query
                }
                current_sum+=num;
                count++;
            }
            // Store the result for this query
            result[i] = count;
        }
        
        return result;
    }
};
