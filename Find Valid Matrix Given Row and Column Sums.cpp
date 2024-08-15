#include <bits/stdc++.h>
#define ll long long


class Solution {
public:
    std::vector<std::vector<int>> restoreMatrix(std::vector<int>& rowSum, std::vector<int>& colSum) {
        int m = rowSum.size();  
        int n = colSum.size(); 
        std::vector<std::vector<int>> matrix(m, std::vector<int>(n, 0)); 

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // Take the minimum of the remaining row sum and column sum
                int value = std::min(rowSum[i], colSum[j]);
                matrix[i][j] = value;  // Set the cell to the minimum value
                rowSum[i] -= value;    // Decrease the row sum by the placed value
                colSum[j] -= value;    // Decrease the column sum by the placed value
            }
        }

        return matrix; 
    }
};
