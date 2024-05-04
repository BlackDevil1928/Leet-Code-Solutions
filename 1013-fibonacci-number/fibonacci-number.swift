class Solution {
    func fib(_ n: Int) -> Int {
        // Base cases
        if n == 0 { return 0 }
        if n == 1 { return 1 }

        // Initialize an array to store calculated Fibonacci values
        var dp: [Int] = [Int](repeating: -1, count: n + 1)
        dp[0] = 0
        dp[1] = 1

        // Call the helper function to calculate Fibonacci
        return fibo(n, &dp)
    }

    func fibo(_ n: Int, _ dp: inout [Int]) -> Int {
        // If the value is already calculated, return it
        if dp[n] != -1 {
            return dp[n]
        }

        // Calculate the Fibonacci value recursively and store it in the dp array
        dp[n] = fibo(n - 1, &dp) + fibo(n - 2, &dp)
        return dp[n]
    }
}
