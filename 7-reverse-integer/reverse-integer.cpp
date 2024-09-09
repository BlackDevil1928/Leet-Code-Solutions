class Solution {
public:
    int reverse(int x) {
        int sum = 0;  // This will store the reversed number
        int limit = INT_MAX / 10;  // Limiting value to check for overflow

        while (x != 0) {
            int lastDigit = x % 10;  // Extract the last digit
            x /= 10;  // Reduce the original number
            
            // Check for overflow/underflow before updating the result
            if (sum > limit || (sum == limit && lastDigit > 7)) return 0;  // Check positive overflow
            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && lastDigit < -8)) return 0;  // Check negative overflow
            
            sum = (sum * 10) + lastDigit;  // Append the last digit to the reversed number
        }

        return sum;
    }
};
