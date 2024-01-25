func longestCommonSubsequence(text1 string, text2 string) int {
    dp := make([][]int, len(text1)+1)
    
    for i := 0; i < len(text1)+1; i++ {
        dp[i] = make([]int, len(text2)+1)
    }
    
    for i := 0; i < len(text1)+1; i++ {
        for j := 0; j < len(text2)+1; j++ {
            dp[i][j] = -1
        }
    }
    
    return lcs(0, 0, text1, text2, &dp)
}

func lcs(i int, j int, str1 string, str2 string, dp *[][]int) int {
    if (*dp)[i][j] != -1 {
        return (*dp)[i][j]
    }
    
    var cache int
    
    if i == len(str1) || j == len(str2) {
        cache = 0
    } else if str1[i] == str2[j] {
        cache = lcs(i+1, j+1, str1, str2, dp) + 1
    } else {
        firstCache := lcs(i+1, j, str1, str2, dp)
        secondCache := lcs(i, j+1, str1, str2, dp)
        cache = max(firstCache, secondCache)
    }
    
    (*dp)[i][j] = cache
    return cache
}

func max(a, b int) int {
    if a > b { return a }
    return b
}