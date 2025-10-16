class Solution {
public:
    int dp[101][101];
    int k(int i , int j, int m , int n, vector<vector<int>> &v){
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j]!= -1)return dp[i][j];
        int d =0; int r = 0;
        if(i+1 <= m-1 && v[i+1][j] == 0) d = k(i +1, j , m , n , v);
        if(j+1 <= n-1 && v[i][j+1] == 0) r = k(i , j +1, m , n , v);
        return dp[i][j]=  r + d;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if( obstacleGrid[0][0] == 1) return 0;
        memset(dp, -1, sizeof(dp));
        return k(0,0, obstacleGrid.size() , obstacleGrid[0].size(), obstacleGrid);
    }
};