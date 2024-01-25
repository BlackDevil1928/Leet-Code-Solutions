function longestCommonSubsequence(text1: string, text2: string): number {
    const m = text1.length; 
    const n = text2.length; 

    //create a 2d array of M x N size
    const dp = new Array(m+1); 
    for(let i = 0; i < m+1; i++) 
        dp[i] = new Array(n+1)
    
    //if length of either string is zero we will have LCS as 0 right ? 
    //"abca" "" : LCS = 0 or "" "" LCS = 0 or "" "axxa" LCS = 0
    for(let i = 0; i < m+1; i++) { 
        for(let j = 0; j < n+1; j++) { 
            if(i === 0 || j === 0) 
              dp[i][j] = 0
            else 
              dp[i][j] = -1
        }
    } 

     for(let i = 1; i < m+1; i++) { 
        for(let j = 1; j < n+1; j++) { 
         //if letters match we will add one to the answer of previously computedsub-prob
         //for "abc" "axx" answer is 1 so for "abca" "axxa" would be 
         //answer for "axx" + 1
            if(text1[i-1] === text2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1]
            //else search for LCS and return max of both choices 
            //"ab" "ax" choice 1: "abc" "ax" or choice 2 "ab" "axx"
            else 
                dp[i][j] = Math.max(dp[i][j-1], dp[i-1][j])    
        }
    }  

    //return answer for the problem when len of strings are m and n
    return dp[m][n]  
};