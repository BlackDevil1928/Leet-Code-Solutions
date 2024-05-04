func findComplement(num int) int {
    var compl int // Variable to store the complement
    pow := 1       // Power of 2, starting at 2^0

    // Iterate until num is greater than 0
    for num > 0 {
        // Get the last bit of num
        digit := num % 2
        // Move to the next bit
        num /= 2
        // If the bit is 0, add 2^pow to the complement
        if digit == 0 {
            compl += pow
        }
        // Increment the power of 2
        pow *= 2
    }

    return compl // Return the complement
}
