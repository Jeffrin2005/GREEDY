
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());  // Sort the array first
        arr[0] = 1;  // The first element must be 1

        // Process the array to ensure each element is at most 1 greater than the previous
        for (int i = 1; i < n;i++){
            if (arr[i] > arr[i - 1] + 1){
                arr[i] = arr[i - 1] + 1;
            }
        }
        int ans = arr[n-1];
        return ans; 
 
    }
};
