class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = capacity.size();
        vector<int>deficits(n);
        // Calculate the diff for each bag
        for (int i = 0; i < n; i++){
            deficits[i] = capacity[i] - rocks[i];
        }
        // Sort the deficits to prioritize bags that need fewer rocks
        sort(deficits.begin(), deficits.end());
        int fullBags = 0;
        // Try to fill each bag starting from the one with the smallest deficit
        for (int i = 0; i < n;i++){
            if (deficits[i] <= additionalRocks){
                additionalRocks -= deficits[i];
                fullBags++;
            }else{
                break;
            }
        }
        
        return fullBags;
    }
};
// DRY RUN 
capacity = [2, 3, 4, 5]
rocks = [1, 2, 4, 4]
additionalRocks = 2
Steps and Calculations
1. Calculate Deficits:
For each bag, calculate the difference between its capacity and the current number of rocks:
deficits[0] = 2 - 1 = 1
deficits[1] = 3 - 2 = 1
deficits[2] = 4 - 4 = 0
deficits[3] = 5 - 4 = 1
deficits = [1, 1, 0, 1]
2. Sort Deficits:
After sorting, deficits remains [0, 1, 1, 1] because it's already in non-decreasing order.
3. Fill Bags:
Start with the smallest deficit and try to fill the bags:
deficits[0] = 0 (already full, move to next)
deficits[1] = 1 (use 1 rock, additionalRocks = 2 - 1 = 1)
deficits[2] = 1 (use 1 rock, additionalRocks = 1 - 1 = 0)
deficits[3] = 1 (no more rocks available to use)
fullBags = 3 (three bags are completely filled)
