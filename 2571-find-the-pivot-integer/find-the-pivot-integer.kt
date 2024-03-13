class Solution {
    fun pivotInteger(n: Int): Int {
        var leftSum = 0 // Initialize the sum of elements from 1 to x
        var rightSum = 0 // Initialize the sum of elements from x to n
        
        // Iterate through all possible values of x
        for (i in 1..n) {
            leftSum = i * (i + 1) / 2 // Calculate the sum of elements from 1 to i using arithmetic progression formula
            rightSum = n * (n + 1) / 2 - i * (i - 1) / 2 // Calculate the sum of elements from i to n using arithmetic progression formula
            
            // Check if the sums are equal
            if (leftSum == rightSum)
                return i // Return i as the pivot integer
        }
        
        return -1 // If no such integer exists, return -1
    }
}