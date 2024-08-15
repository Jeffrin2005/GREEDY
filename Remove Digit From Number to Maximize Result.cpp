class Solution {
public:
    string removeDigit(string number, char digit) {
        string maxResult = "";
    for (int i = 0; i < number.size(); ++i) {
        if (number[i] == digit) {
            // Create a new number by omitting the current digit
            std::string newNumber = number.substr(0, i) + number.substr(i + 1);
            // Update maxResult if the new number is greater
            if (newNumber > maxResult){
                maxResult = newNumber;
            }
        }
    }
    return maxResult;
    }
};
