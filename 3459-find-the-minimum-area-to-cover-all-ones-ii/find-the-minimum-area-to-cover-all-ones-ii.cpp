#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSum(vector<vector<int>>& A) {
        int res = INT_MAX;
        for (int rot = 0; rot < 4; rot++) {
            int n = A.size(), m = A[0].size();
            for (int i = 1; i < n; i++) {
                // Top part
                vector<vector<int>> part1(A.begin(), A.begin() + i);
                int a1 = minimumArea(part1);

                for (int j = 1; j < m; j++) {
                    // Split remaining bottom part into left and right
                    vector<vector<int>> part2(n - i, vector<int>(j));
                    vector<vector<int>> part3(n - i, vector<int>(m - j));

                    for (int r = 0; r < n - i; r++) {
                        for (int c = 0; c < j; c++)
                            part2[r][c] = A[i + r][c];
                        for (int c = 0; c < m - j; c++)
                            part3[r][c] = A[i + r][j + c];
                    }

                    int a2 = minimumArea(part2);
                    int a3 = minimumArea(part3);
                    res = min(res, a1 + a2 + a3);
                }

                // Horizontal cuts (3 horizontal sections)
                for (int i2 = i + 1; i2 < n; i2++) {
                    vector<vector<int>> part2(A.begin() + i, A.begin() + i2);
                    vector<vector<int>> part3(A.begin() + i2, A.end());
                    int a2 = minimumArea(part2);
                    int a3 = minimumArea(part3);
                    res = min(res, a1 + a2 + a3);
                }
            }
            A = rotate(A); // Rotate the matrix
        }
        return res;
    }

private:
    int minimumArea(const vector<vector<int>>& A) {
        if (A.empty() || A[0].empty()) return 0;
        int n = A.size(), m = A[0].size();
        int left = INT_MAX, top = INT_MAX, right = -1, bottom = -1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (A[i][j] == 1) {
                    left = min(left, j);
                    top = min(top, i);
                    right = max(right, j);
                    bottom = max(bottom, i);
                }
            }
        }
        if (right == -1) return 0; 
        return (right - left + 1) * (bottom - top + 1);
    }

    vector<vector<int>> rotate(const vector<vector<int>>& A) {
        int n = A.size(), m = A[0].size();
        vector<vector<int>> rotated(m, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                rotated[j][n - 1 - i] = A[i][j];
            }
        }
        return rotated;
    }
};
