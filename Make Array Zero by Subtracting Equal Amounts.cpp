#include <vector>
#include <set>

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> unique_elements;
        
        // Collect all unique positive elements
        for (int num : nums) {
            if (num > 0) {
                unique_elements.insert(num);
            }
        }
        
        // The number of unique positive elements is the number of operations needed
        return unique_elements.size();
    }
};
