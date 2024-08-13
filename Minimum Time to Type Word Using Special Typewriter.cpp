
class Solution {
public:
    int minTimeToType(std::string word) {
        int time = 0;
        char current = 'a'; // Initial position of the pointer

        for (char ch : word) {
            int clockwise = abs(ch - current);
            int counterclockwise = 26 - clockwise; // Total letters is 26, so the other direction is 26 - clockwise
            time += 1 + std::min(clockwise, counterclockwise); // 1 second to type the character + minimum seconds to move
            current = ch; // Update the current pointer position to the last typed character
        }

        return time;
    }
};
