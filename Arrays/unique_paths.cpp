class Solution {
public:
    // int countPaths(int i, int j, int m, int n) {
    //     // if (i == m - 1 && j == n - 1)
    //     //     return 1;
    //     // if (i >= m || j >= n)
    //     //     return 0;
    //     // return countPaths(i + 1, j, m, n) + countPaths(i, j + 1, m, n);
    // }

    int uniquePaths(int m, int n) {
        // int cnt;
        // return cnt = countPaths(0, 0, m, n);
        int N = (m + n) - 2;
        int r = min(m, n) - 1;
        double res = 1;

        for(int i = 1; i <= r; i++, N--) {
            res = res * (N) / i;
        }

        return (int)res;
    }
};