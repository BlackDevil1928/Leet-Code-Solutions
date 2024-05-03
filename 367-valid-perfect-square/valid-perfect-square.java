class Solution {
    public boolean isPerfectSquare(int num) {
        // Check if num is 0 or 1, as their square roots are 0 and 1 respectively
        if (num <= 1) {
            return true;
        }

        // Use binary search to find the square root
        long start = 1;
        long end = num;

        while (start <= end) {
            // Calculate the middle value
            long mid = start + (end - start) / 2;
            // Calculate the square of the middle value
            long square = mid * mid;

            // If the square is equal to num, we found the square root
            if (square == num) {
                return true;
            } else if (square < num) {
                // If the square is less than num, search the right half
                start = mid + 1;
            } else {
                // If the square is greater than num, search the left half
                end = mid - 1;
            }
        }

        // If we reach here, the square root is not an integer
        return false;
    }
}
