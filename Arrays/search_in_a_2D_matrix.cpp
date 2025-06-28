class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int m = matrix.size(), n = matrix[0].size();

        // for (auto arr : matrix) {
        //     int low = 0, high = n - 1;
        //     while (low <= high) {
        //         int mid = (low + high) / 2;
        //         if (arr[mid] == target)
        //             return true;
        //         else if (arr[mid] > target)
        //             high = mid - 1;
        //         else
        //             low = mid + 1;
        //     }
        // }
        // tc : O(m * logn), sc : O(1)

        // return false;

        // optimized code
        int m = matrix.size(), n = matrix[0].size();
        int low = 0, high = (m * n) - 1;

        while(low <= high) {
            int mid = (low + high) / 2;
            int row = mid / n;
            int col = mid % n;
            int midVal = matrix[row][col];

            if(midVal == target) return true;
            else if(midVal < target) low = mid + 1;
            else high = mid - 1;
        }

        return false;
    }
};