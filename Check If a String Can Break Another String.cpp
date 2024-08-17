class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        // check if s1 can break s2
        bool s1BreaksS2 = true;
        bool s2BreaksS1 = true;
        for(int i = 0; i < s1.size();i++){
            if(s1[i] < s2[i]) {
                s1BreaksS2 = false;
            }
            if(s2[i] < s1[i]) {
                s2BreaksS1 = false;
            }
        }
     if(s1BreaksS2 == true || s2BreaksS1 == true) {
            return true;
        } else {
            return false;
        }
    }
};
