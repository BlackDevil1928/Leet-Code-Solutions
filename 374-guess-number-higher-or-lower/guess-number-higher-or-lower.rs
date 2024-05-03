impl Solution {
    unsafe fn guessNumber(n: i32) -> i32 {
        // Initialize the range to search
        let (mut l, mut r) = (1, n);
        // Perform binary search
        while l <= r {
            // Calculate the middle value
            let mid = l + (r - l >> 1);
            // Make a guess and check the result
            match guess(mid) {
                0 => return mid, // Found the number, return it
                x if x < 0 => {  // Guessed number is too high, update the upper bound
                    r = mid - 1;
                }
                _ => {           // Guessed number is too low, update the lower bound
                    l = mid + 1;
                }
            }
        }
        -1 // If the loop ends, the number was not found
    }
}
