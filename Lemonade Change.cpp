#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0; // Count of $5 and $10 bills
        for(auto&bill : bills){
            if(bill == 5) {
                // If the customer pays with a $5 bill, no change needed.
                five++;
            }else if(bill == 10) {
                // If the customer pays with a $10 bill, need one $5 bill as change.
                if (five == 0) return false; // If no $5 bill is available, return false.
                five--;
                ten++;
            } else if(bill == 20){
                // If the customer pays with a $20 bill, prefer to give one $10 and one $5 as change.
                if (ten > 0 && five > 0){
                    ten--;
                    five--;
                }else if(five >= 3){
                    // If no $10 bill is available, give three $5 bills.
                    five-=3;
                }else{
                    return false; // If neither change option is possible, return false.
                }
            }
        }
        
        return true; 
    }
};
