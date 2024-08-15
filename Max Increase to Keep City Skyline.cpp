class Solution {
public:
    int maxIncreaseKeepingSkyline(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
    vector<int> maxRow(n, 0), maxCol(n, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                maxRow[i] = max(maxRow[i], grid[i][j]);
                maxCol[j] = max(maxCol[j], grid[i][j]);
            }
        }
        int totalIncrease = 0;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                int maxPossibleHeight = min(maxRow[i], maxCol[j]);
                totalIncrease+=maxPossibleHeight - grid[i][j];
            }
        }

        return totalIncrease;
    }
};
