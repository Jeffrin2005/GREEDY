#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        // Initialize max values for a, b, c that can be achieved
        int maxA = 0, maxB = 0, maxC = 0;
        for ( auto& triplet : triplets){
            int a = triplet[0], b = triplet[1], c = triplet[2];

            // Only consider triplets that do not exceed the target values in any dimension
            if (a <= target[0] && b <= target[1] && c <= target[2]) {
                // Update the maximum values for a, b, c
                maxA = max(maxA, a);
                maxB = max(maxB, b);
                maxC = max(maxC, c);
            }
        }

        // Check if the maximum values match the target values
        return maxA == target[0] && maxB == target[1] && maxC == target[2];
    }
};
