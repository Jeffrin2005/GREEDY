class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = accumulate(arr.begin(),arr.end(),0LL);
        if(totalSum % 3 != 0) return false;
        int targetSum = totalSum / 3;
        int currentSum = 0;
        int count = 0;
        for (int num : arr){
            currentSum+=num;
            if(currentSum == targetSum){
                count++;
                currentSum = 0; // Reset current sum for the next segment
            }
            if (count == 3) {
                return true;
            }
        }
        
        return false;
    }
};
