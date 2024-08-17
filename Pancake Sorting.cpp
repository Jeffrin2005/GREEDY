class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> ks;
        // Convert while loop to for loop
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == i + 1) continue; // maximum element at the right index
            else {
                int j = i;
                while (arr[j] != i + 1) j--; // locating the maximum element
                if (j != 0) {
                    reverse(arr.begin(), arr.begin() + j + 1); // bringing the max element to the zeroeth index (if it isn't already)
                    ks.push_back(j + 1);
                }
                reverse(arr.begin(), arr.begin() + i + 1); // sending the max element to its right index
                ks.push_back(i + 1);
            }
        }
        return ks;
    }
};
