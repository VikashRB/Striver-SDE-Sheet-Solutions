class Solution {
public:
    /*void markRow(vector<vector<int>>& matrix, int m, int i) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != 0) {
                matrix[i][j] = -1;
            }
        }
    }*/

    /*void markCol(vector<vector<int>>& matrix, int n, int j) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] != 0) {
                matrix[i][j] = -1;
            }
        }
    }*/

    void setZeroes(vector<vector<int>>& matrix) {
        // brute force
        /*int i, j;
        int n = matrix.size();
        int m = matrix[0].size();
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (matrix[i][j] == 0){
                    markRow(matrix, m, i);
                    markCol(matrix, n, j);
                }
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (matrix[i][j] == -1) {
                    matrix[i][j] = 0;
                }
            }
        }*/
        int n, m;
        n = matrix.size();
        m = matrix[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};