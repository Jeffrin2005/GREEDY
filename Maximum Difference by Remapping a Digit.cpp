// Input: num = 51891
// Initial String (s): "51891"
// Finding ch1 for Maximum: The first non-'9' digit is '5', so ch1 = '5'.
// Finding ch2 for Minimum: The first non-'0' digit is '5', so ch2 = '5'.
// Replacing for Maximum (s1): Replace '5' with '9' → "91891"
// Replacing for Minimum (s2): Replace '5' with '0' → "01891" (which is 1891 as an integer).
// Difference: 91891 - 1891 = 90000
class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        int n = s.size();
        string s1 = s;
        string  s2 = s;
        char ch1 = s[0];
        char  ch2 = s[0];
        for(int i=0; i<n; i++){
            if(s[i] != '9'){
                ch1 = s[i];
                break;
            }
        }
        for(int i=0; i < n; i++){
            if(s[i] != '0'){
                ch2 = s[i];
                break;
            }
        }
        for(int i=0; i < n ; i++){
                 if(s1[i] == ch1) s1[i] = '9';// s1 = maximum string

                if(s2[i] == ch2) s2[i] = '0';// s2 = minimum string 

        }
        return stoi(s1) - stoi(s2);
    }
};
