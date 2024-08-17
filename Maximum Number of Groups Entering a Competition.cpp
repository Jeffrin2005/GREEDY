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

// greedy 
class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(), grades.end());
        int prevSum = 0, curSum = 0;
        int prevCount = 0, curCount = 0, res = 0;
        for(auto&grade: grades){
            curSum+=grade;
            curCount++;
            if(curCount > prevCount && curSum > prevSum){
                res++;
                prevSum = curSum; 
                prevCount = curCount;
                curSum =0;
                 curCount = 0;
            }
        }
        return res;
    }
};
