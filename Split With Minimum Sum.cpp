
class Solution {
public:
    int splitNum(int num) {
       string s = to_string(num);
       sort(s.begin(), s.end());
        string num1 = "", num2 = "";
        // Distribute the digits alternately to num1 and num2
        for (int i = 0; i < s.size(); i++) {
            if(i % 2 == 0) {
                num1+=s[i];  // Even index digits go to num1
            } else{
                num2+=s[i];  // Odd index digits go to num2
            }
        }
        
        // Convert num1 and num2 back to integers and sum them
        int n1 = stoi(num1);
        int n2 =stoi(num2);
        
        return n1 + n2;
    }
};
