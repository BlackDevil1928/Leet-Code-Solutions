public class Solution {
    public int ClimbStairs(int n) {
        // If the N is less than 2 | No.of ways to reach will be N.
        if(n<=2) return n;

        // Initialize variables to keep track of previous two steps.
        int prev = 1, B_prev = 2;
        // Current Step Count based on previous Two steps.
        int current = 0;

        for(int loop=1; loop<n-1; loop++){
            current = prev + B_prev; // Calculate current steps
            // Update previous steps for next iteration
            prev = B_prev;
            B_prev = current;
        }

        return current;
    }
}