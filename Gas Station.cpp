

class Solution {
public:
    int canCompleteCircuit(std::vector<int>& gas, std::vector<int>& cost) {
        int total_tank = 0;
        int current_tank = 0;
        int starting_station = 0;
        for (int i = 0; i < gas.size(); i++){
            total_tank += gas[i] - cost[i];
            current_tank += gas[i] - cost[i];
            // If we can't reach the next station
            if (current_tank < 0) {
                // Start from the next station
                starting_station = i + 1;
                // Reset the current tank
                current_tank = 0;
            }
        }
        // Check if the total gas is enough to cover the total cost
        return total_tank >= 0 ? starting_station : -1;
    }
};
