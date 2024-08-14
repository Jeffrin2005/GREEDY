class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size();
        for (int i = 0; i < n - 1; i++) {
            // Check if s[i] and s[i+1] have the same parity
            if ((s[i] % 2) == (s[i + 1] % 2)) {
                // Check if swapping makes the string lexicographically smaller
                if (s[i] > s[i + 1]) {
                    swap(s[i], s[i + 1]);
                    break; // Only one swap allowed
                }
            }
        }
        return s;
    }
};
