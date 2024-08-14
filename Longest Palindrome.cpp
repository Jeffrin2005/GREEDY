class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>charCount;
        for(auto&c : s)   charCount[c]++;
        int length = 0;
        bool hasOdd = false;
        for(auto&p : charCount){
            if(p.second % 2 == 0){
                length+=p.second; // Add all if even ( aaaa )
            }else{
                length+=p.second - 1; // Add the largest even number less than count
                hasOdd = true; // There's at least one odd, can be used as center
            }
        }
        if(hasOdd){
            length += 1; // Add one for the center if there's any odd count
        }

        return length;
    }
};
