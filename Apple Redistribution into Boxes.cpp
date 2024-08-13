
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total_apples = accumulate(apple.begin(),apple.end(),0LL);
        // Sort capacities in descending order
        sort(capacity.rbegin(), capacity.rend());
        int current_capacity = 0;
        int box_count = 0;
        int ans =0;
        // Select boxes until the total capacity meets or exceeds the total number of apples
        for(auto&cap : capacity){
            current_capacity+=cap;
            box_count++;
            if(current_capacity >= total_apples) {
               ans = box_count;
               break;
            }
        }
        return ans; 
    }
};
