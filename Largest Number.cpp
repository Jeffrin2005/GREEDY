class Solution {
public:
    string largestNumber(vector<int>& nums) {
        // Convert all integers to strings
        vector<string>asStr;
        for(auto&num : nums) {
            asStr.push_back(to_string(num));
        }
        // Sort using a custom lambda comparator
        sort(asStr.begin(), asStr.end(), []( string &a,  string &b) {
            return a + b > b + a; // Compare concatenated results
        });

        // Handle the case where the largest number is "0"
        if (asStr[0] == "0") {
            return "0";
        }

        // Build the largest number from the sorted strings
        string largestNum;
        for(auto&&s : asStr) {
            largestNum += s;
        }
        return largestNum;
    }
};
