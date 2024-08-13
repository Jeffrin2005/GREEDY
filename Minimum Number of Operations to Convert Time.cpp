class Solution {
public:
    //  function to convert time "HH:MM" to total minutes
    int timeToMinutes( string& time){
        int hours = stoi(time.substr(0, 2));// taking 2 characters from the postion 0 
        int minutes = stoi(time.substr(3, 2));// taking 2 characters from the postion 3
        return hours * 60 + minutes;
    }

    int convertTime(string current, string correct){
        // Convert both times to minutes
        int currentMinutes = timeToMinutes(current);
        int correctMinutes = timeToMinutes(correct);
        // Calculate the difference in minutes
        int diff = correctMinutes - currentMinutes;
        vector<int> increments = {60, 15, 5, 1};
        int operations = 0;
        for(auto&increment : increments){
            operations+=diff / increment;  // Count how many times we can use this increment
            diff%=increment;      // Reduce the difference by the amount we've covered
        }

        return operations;
    }
};
