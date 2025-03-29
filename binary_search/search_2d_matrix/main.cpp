
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int r = 0; r < matrix.size(); r++) {
            cout << matrix[r][0] << " " << matrix[r][matrix[r].size() - 1] << endl;
            if (matrix[r][0] == target || matrix[r][matrix[r].size() - 1] == target) {
                return true;
            }

            if (matrix[r][0] < target && matrix[r][matrix[r].size() - 1] > target) {
                int l = 0;
                int h = matrix[r].size() - 1;
                int mid = 0;

                while (l <= h) {
                    mid = l + ((h - l) / 2);

                    if (matrix[r][mid] == target) {
                        return true;
                    }

                    if (matrix[r][mid] > target) {
                        h = mid - 1;
                    } else{
                        l = mid + 1;
                    }
                }
            }
        }

        return false;
    }
};
