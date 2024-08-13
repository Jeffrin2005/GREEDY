
class Solution {
     struct CompareUnits {
        bool operator()(const vector<int>& a, const vector<int>& b) {
            return a[1] > b[1];
        }
    };
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        // Sort the box types based on the number of units per box in descending order
        sort(boxTypes.begin(), boxTypes.end(), CompareUnits());
        int totalUnits = 0;
        for (auto&boxType : boxTypes){
            if(truckSize == 0) break; // If the truck is full, stop adding boxes
            int boxes = boxType[0];
            int unitsPerBox = boxType[1];
            // Calculate the number of boxes we can take
            int boxesToTake = min(boxes, truckSize);
            // Update the total units with the number of boxes taken times units per box
            totalUnits+=boxesToTake * unitsPerBox;
            // Decrease the truck size by the number of boxes taken
            truckSize-=boxesToTake;
        }

        return totalUnits;
    }
};
