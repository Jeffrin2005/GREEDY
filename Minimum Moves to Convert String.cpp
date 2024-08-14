class Solution {
public:
    int minimumMoves(string s) {
        int step = 0;
        for (int i = 0; i < s.size();) {  // Initialize the loop without incrementing i here
            if (s[i] == 'X') {
                // If 'X' is found, skip the next two characters as well
                i += 3;
                step++;
            } else {
                // If 'O' is found, just move to the next character
                i++;
            }
        }
        return step;
    }
};
