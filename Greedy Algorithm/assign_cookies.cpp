class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0, j = 0, ans = 0;
        int n = s.size();
        int m = g.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(i < m && j < n) {
            if(s[j] >= g[i]) {
                ans++;
                i++;
                j++;
            } else {
                j++;
            }
        }

        return ans;
    }
};