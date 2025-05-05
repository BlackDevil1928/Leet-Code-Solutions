class Solution {
public:
    const long mod = 1e9 + 7;
    // dp[i][possible] stores the result for index i and state of 'possible'
    long dp[1001][2];

    long dominoes(int i, int n, bool possible) {
        if (i == n) return !possible;
        if (i > n) return 0;
        if (dp[i][possible] != -1) return dp[i][possible];

        if (possible) {
            // Only vertical tile or L-shaped domino
            return dp[i][possible] = (dominoes(i + 1, n, false) + 
                                      dominoes(i + 1, n, true)) % mod;
        }

        // Fill vertically, horizontally (needs 2 spaces), or L-tile (2 ways)
        return dp[i][possible] = (dominoes(i + 1, n, false) + 
                                  dominoes(i + 2, n, false) + 
                                  2L * dominoes(i + 2, n, true)) % mod;
    }

    int numTilings(int n) {
        memset(dp, -1, sizeof(dp)); // Initialize memo table
        return dominoes(0, n, false);
    }
};
