class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                // Replace the character at the larger index with the smaller one
                if (s[left] > s[right]) {
                    s[left] = s[right]; // Make the change towards the lexicographically smaller character
                } else {
                    s[right] = s[left];
                }
            }
            left++;
            right--;
        }

        return s;
    }
};
