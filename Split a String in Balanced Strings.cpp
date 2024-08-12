class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int count = 0;
        for(auto&c : s){
            if(c == 'L'){
                balance--;
            }else{ // c == 'R'
                balance++;
            }
            // When balance is zero, we have a balanced substring
            if (balance == 0) {
                count++;
            }
        }
        
        return count;
    }
};
