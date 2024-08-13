class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int odd_count = 0, even_count = 0;
        // Count the number of chips at odd and even positions
        for(auto&pos : position){
            if(pos % 2 == 0){
                even_count++;
            } else {
                odd_count++;
            }
        }
        // Return the minimum of the two counts
        return min(odd_count, even_count);
    }
};
