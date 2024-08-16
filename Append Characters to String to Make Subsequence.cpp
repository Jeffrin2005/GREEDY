class Solution {
public:
    int appendCharacters(string s, string t) {
         int i = 0;
         int  j = 0;
    int len_s = s.size();
    int  len_t = t.size();
    while (i < len_s && j < len_t) {
        if(s[i] == t[j]){
            j++;
        }
        i++;
    }
    return len_t - j;
    }
};
