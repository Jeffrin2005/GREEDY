
class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char, int>lastPosition;
        for (int i = 0; i < s.size(); i++){
            lastPosition[s[i]] = i;  // Store the last position of each character
        }
      vector<int> partitions;
        int start = 0;
        int end = 0;
        for(int i = 0; i < s.size(); i++){
            end = max(end, lastPosition[s[i]]);  // Extend the end to the last occurrence of the current character
            if(i == end){  // If current index is the end of the partition
                partitions.push_back(end - start + 1);
                start = i + 1;  // Update start to the next character after the current partition
            }
        }
        return partitions;
    }
};
Let’s do a dry run with the example string s = "eccbbbbdec".


lastPosition map: {e: 9, c: 9, b: 6, d: 8}
partitions vector: []
start: 0
end: 0
First Iteration (i = 0):
Character: e
end = max(0, 9) = 9
i is not equal to end, so continue.
Second Iteration (i = 1):
Character: c
end = max(9, 9) = 9
i is not equal to end, so continue.
Third Iteration (i = 2):
Character: c
end = max(9, 9) = 9
i is not equal to end, so continue.
Fourth Iteration (i = 3):
Character: b
end = max(9, 6) = 9
i is not equal to end, so continue.
Fifth Iteration (i = 4):
Character: b
end = max(9, 6) = 9
i is not equal to end, so continue.
Sixth Iteration (i = 5):
Character: b
end = max(9, 6) = 9
i is not equal to end, so continue.
Seventh Iteration (i = 6):
Character: b
end = max(9, 6) = 9
i is not equal to end, so continue.
Eighth Iteration (i = 7):
Character: d
end = max(9, 8) = 9
i is not equal to end, so continue.
Ninth Iteration (i = 8):
Character: e
end = max(9, 9) = 9
i is not equal to end, so continue.
Tenth Iteration (i = 9):
Character: c
end = max(9, 9) = 9
i is equal to end, so:
Add end - start + 1 = 9 - 0 + 1 = 10 to partitions
Update partitions to [10]
Update start to 10
