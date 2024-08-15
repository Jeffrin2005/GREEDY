#include <bits/stdc++.h>
#define ll long long 
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0; // To keep track of the number of flowers planted
        int n1 = flowerbed.size();
        for (int i = 0; i < n1; i++){
            // Check if current plot is empty and the adjacent plots are also empty or boundaries
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == n1 - 1 || flowerbed[i + 1] == 0)){
                flowerbed[i] = 1; // Plant a flower here
                count++; // Increment the count of flowers planted
                if (count >= n) return true; // If we've planted enough flowers, return true
                i++; // Skip the next plot to ensure no adjacent flowers
            }
        }
      return (count >=n);
    }
};
