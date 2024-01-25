class Solution {
    func longestCommonSubsequence(_ text1: String, _ text2: String) -> Int {
        var m = text1.count, n = text2.count
        var dp = Array(repeating: Array(repeating:0, count: n+1), count: m+1)
        var arr1 = Array(text1), arr2 = Array(text2)

        for i in 1...m {
            for j in 1...n {
                if arr1[i-1] == arr2[j-1] {
                    dp[i][j] = dp[i-1][j-1] + 1
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1])
                }
            }
        }

        return dp[m][n]
    }
}