
class Solution {
public:
    static bool comp(const vector<int>& a, const vector<int>& b) {
        return (a[0] - a[1]) < (b[0] - b[1]);
    }

    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), comp);

        int totalCost = 0;
        int n = costs.size() / 2;
        // Assign the first n people to city A and the next n people to city B
        for (int i = 0; i < n; i++){
            totalCost += costs[i][0]; // Cost for city A
        }
        for (int i = n; i < 2 * n; ++i) {
            totalCost += costs[i][1]; 
        }

        return totalCost;
    }
};
