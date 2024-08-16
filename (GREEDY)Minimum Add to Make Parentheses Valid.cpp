class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0; 
        int insertions = 0;
        for(auto&c : s) {
            if(c == '('){
                // Increase balance for an opening parenthesis
                balance++;
            }else if (c == ')') {
                // Decrease balance for a closing parenthesis
                balance--;
            }

            // If balance is negative, we have more ')' than '(' up to this point
            if (balance < 0){
                insertions++;  // We need an insertion of '('
                balance = 0;  // Reset balance as we've virtually added '('
            }
        }
        // Any positive balance at the end indicates unmatched '('
        return insertions + balance;
    }
};
// dry run for insertion + balance
// Consider the string s = "(()(":
// Start: balance = 0, insertions = 0.
// First Character (: balance = 1.
// Second Character (: balance = 2.
// Third Character ): balance = 1.
// Fourth Character (: balance = 2.
// At the end of the string:
// Balance: 2 (indicating two unmatched ().
// Insertions: 0 (no unmatched ) required correction).
// To make the string valid:
// You need to add two closing parentheses ) at the end to match the two unmatched opening parentheses. Thus, you need 2 additional insertions.
// Final Calculation:
// return insertions + balance; → return 0 + 2; → 2.
