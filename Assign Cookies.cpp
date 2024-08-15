class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // Sort the greed factors and the sizes of the cookies
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int childIndex = 0; /// pointer for children
        int cookieIndex = 0; // pointer for   cookiess
        //iterate through cookies and children
        while(childIndex < g.size() && cookieIndex < s.size()){
            if(s[cookieIndex] >= g[childIndex]){
                // if the current cookie can satisfy the current child
                childIndex++; // move to the next child
            }
            cookieIndex++; // move to the larger next cookie
        }
        return childIndex;
    }
};
