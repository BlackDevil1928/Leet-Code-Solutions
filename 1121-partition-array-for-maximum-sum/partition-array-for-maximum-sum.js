/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var maxSumAfterPartitioning = function(arr, k) {
    // Length of the input array
    const n = arr.length;
    
    // Dynamic programming table to store maximum sum at each position
    const dp = new Array(n + 1).fill(0);
    
    // Iterate through the array elements
    for (let i = 0; i < n; i++) {
        let curMax = 0, curSum = 0;
        
        // Iterate over the last k elements or until the beginning of the array
        for (let j = i; j > Math.max(-1, i - k); j--) {
            // Update the maximum value in the current partition
            curMax = Math.max(curMax, arr[j]);
            
            // Calculate the current sum considering the maximum value in the partition
            const cur = curMax * (i - j + 1) + dp[j];
            
            // Update the current sum if the new one is greater
            curSum = Math.max(curSum, cur);
        }
        
        // Update the dynamic programming table with the maximum sum at the current position
        dp[i + 1] = curSum;
    }
    
    return dp[n];
};