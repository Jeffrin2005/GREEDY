class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count1 = 0;
        int count0 = 0;
        for (char c : s){
            if (c == '1'){
                count1++;
            } else {
                count0++;
            }
        }
        string one = string(count1-1,'1');
        string zero = string(count0,'0');
       string on = string(1, '1');
        string ans = one + zero + on;
        return ans; 
        // string ans = string(count1 - 1, '1') 
        // // Construct the result: all '1's (except the last one), then all '0's, and the last '1' at the end
        // string result = string(count1 - 1, '1') + string(count0, '0') + '1';
        
        // return result;
    }
};
