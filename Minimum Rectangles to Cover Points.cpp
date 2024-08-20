class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        
        vector<int> x;
        for(int i=0; i<points.size(); i++)
        {
            x.push_back(points[i][0]);
        }
        
        sort(x.begin(), x.end());
        
        int e=0, s=0;
        int ans=1;
    
        while(e<x.size())
        {
            if(x[e]-x[s] > w)
            {
                ans++;
                s=e;
            }
            e++;
        }
        return ans; 
    }
};
