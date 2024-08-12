class Solution {
public:
    int minimumSum(int num) {
        // Convert the number to a string to easily access digits
      string digits =to_string(num);
        // Sort the digits
      sort(digits.begin(), digits.end());
        // Create two new numbers from the sorted digits
        int new1 = (digits[0] - '0') * 10 + (digits[2] - '0');
        int new2 = (digits[1] - '0') * 10 + (digits[3] - '0');
        return new1 + new2;
    }
};
