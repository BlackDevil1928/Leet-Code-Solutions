class Solution {
public:
    // Function to solve the wildcard matching problem using dynamic programming (tabulation)
    bool solveTab(string s, string p) {
        int sLen = s.length();
        int pLen = p.length();
        
        // Create a 2D DP table with dimensions (sLen+1) x (pLen+1)
        // dp[i][j] represents whether s[0...i-1] matches p[0...j-1]
        vector<vector<bool>> dp(sLen + 1, vector<bool>(pLen + 1, false));
        
        // Base case: empty string matches empty pattern
        dp[0][0] = true;
        
        // Initialize first row: empty string matching pattern with only '*' characters
        for (int j = 1; j <= pLen; j++) {
            bool flag = true;
            // Check if all characters up to position j in pattern are '*'
            for (int k = 1; k <= j; k++) {
                if (p[k - 1] != '*') {
                    flag = false;
                    break;
                }
            }
            dp[0][j] = flag;
        }
        
        // Fill the DP table
        for (int i = 1; i <= sLen; i++) {
            for (int j = 1; j <= pLen; j++) {
                // Case 1: Current pattern character is '?' or matches current string character
                if (p[j - 1] == '?' || p[j - 1] == s[i - 1]) {
                    // Match found, take result from diagonal (previous characters matched)
                    dp[i][j] = dp[i - 1][j - 1];
                }
                // Case 2: Current pattern character is '*'
                else if (p[j - 1] == '*') {
                    // '*' can match empty sequence (dp[i][j-1]) or 
                    // '*' can match one or more characters (dp[i-1][j])
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                }
                // Case 3: Characters don't match and no wildcard
                else {
                    dp[i][j] = false;
                }
            }
        }
        
        // Return the result for matching entire string with entire pattern
        return dp[sLen][pLen];
    }

    // Main function to check if string matches the pattern
    bool isMatch(string s, string p) {
        return solveTab(s, p);
    }
};
