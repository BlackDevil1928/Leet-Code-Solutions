bool isPowerOfThree(int n) {
    // If n is 0, it cannot be a power of 3
    if (n == 0) {
        return false;
    }
    // If n is 1, it is a power of 3 (3^0 = 1)
    else if (n == 1) {
        return true;
    }
    // If n is divisible by 3, recursively check if n/3 is a power of 3
    else if (n % 3 == 0 && isPowerOfThree(n / 3)) {
        return true;
    }
    // Otherwise, n is not a power of 3
    return false;
}
