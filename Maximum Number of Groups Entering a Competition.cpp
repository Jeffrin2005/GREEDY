class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int sum  = 0;
        int cnt  =  0;
        int i = 1;
        
        while(sum < n){
            sum+=i;
            if(sum > n){
                break;
            }
            cnt++;
            i++;
        }
        return cnt;
    }
};
