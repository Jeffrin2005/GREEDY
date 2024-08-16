class Solution {
public:
    int partitionString(string s) {
           set<char>seen;
        int count = 0;
        for(auto&c : s){
            // If the character is already in the set, increment the count and clear the set
            if(seen.find(c) != seen.end()){
                count++;
                seen.clear();
            }
            // Add the current character to the set
            seen.insert(c);
        }

        // Increment count for the last substring if it exists
        if (!seen.empty()){
            count++;
        }

        return count;
    }
};
