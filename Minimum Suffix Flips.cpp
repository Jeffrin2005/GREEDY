class Solution {
public:
    int minFlips(string target) {
        int flips = 0;
        char current = '0'; // Start with 's' as all zeros
        for (int i = 0; i < target.size(); i++){
            if(target[i] != current){
                // If there's a mismatch, we need to flip from here to the end
                flips++;
                // Toggle the current expected value using if statement
                if (current == '0') {
                    current = '1';
                } else {
                    current = '0';
                }
            }
        }

        return flips;
    }
};
