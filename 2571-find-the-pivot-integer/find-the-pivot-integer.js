/**
 * @param {number} n - Positive integer
 * @return {number} - The pivot integer x or -1 if no such integer exists
 */
var pivotInteger = function(n) {
    // Iterate through all possible values of x
    for (let i = 1; i <= n; i++) {
        let leftSum = (i * (i + 1)) / 2; // Calculate the sum of elements from 1 to i using arithmetic progression formula
        let rightSum = (n * (n + 1)) / 2 - (i * (i - 1)) / 2; // Calculate the sum of elements from i to n using arithmetic progression formula
        
        // Check if the sums are equal
        if (leftSum === rightSum)
            return i; // Return i as the pivot integer
    }
    
    return -1; // If no such integer exists, return -1
};