class Solution {
public:
    int minPartitions(string n) {
        int mini = INT_MIN; 
        for (int i = 0; i < n.size(); i++) {
            int digit = n[i] - '0'; 
            mini = max(mini, digit); 
        }
        return mini;
    }
};
