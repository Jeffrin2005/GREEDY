class Solution {
public:
    int maximum69Number (int num) {
        // Convert the integer to a string
        string numStr = to_string(num);
        // Find the first occurrence of '6' and change it to '9'
        for (char &c : numStr) {
            if (c == '6'){
                c = '9';
                break; // Change only the first '6' found
            }
        }
        // Convert the string back to an integer
        return stoi(numStr);
    }
};
