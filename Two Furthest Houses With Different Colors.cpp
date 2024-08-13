class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int max_dist_from_start = 0;
        int max_dist_from_end = 0;
        // Check from the start
        for (int i = n - 1; i >= 0; i--){
            if(colors[i] != colors[0]){
                max_dist_from_start = i;
                break;
            }
        }

        // Check from the end
        for (int i = 0; i < n; ++i) {
            if (colors[i] != colors[n - 1]) {
                max_dist_from_end = n - 1 - i;
                break;
            }
        }

        // Return the maximum of the two distances
        return max(max_dist_from_start, max_dist_from_end);
    }
};
