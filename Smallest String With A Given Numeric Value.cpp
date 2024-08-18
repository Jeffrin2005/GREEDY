class Solution {
public:
    string getSmallestString(int n, int k) {
        // Create a string of 'n' 'a's
        string result(n, 'a');
        k -= n;  // Adjust k to account for the initial 'a's added
        // Start from the end of the string
        int i = n - 1;
        while (k > 0){
            // Calculate the maximum value we can add at this position
            int add = min(25, k);  // 25 because 'z' - 'a' = 25
            result[i] += add;  // Increment the character at position i
            k-=add;  // Decrease k by the amount added
            i--;  // Move to the previous character
        }

        return result;
    }
};
