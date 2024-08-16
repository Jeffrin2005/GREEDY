class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0;
        int  tIndex = 0;
        while(tIndex < t.size()) {
            if(s[sIndex] == t[tIndex]){
                sIndex++;
                if(sIndex == s.size()) return true;
            }
            tIndex++;
        }
        return sIndex == s.size();
    }
};
