func maxCount(m int, n int, ops [][]int) int {
    // Initialize x and y with the initial dimensions m and n
    x, y := m, n

    // Iterate through each operation in ops
    for _, o := range ops {
        // Update x and y to be the minimum of their current values and the values from the operation
        x = min(o[0], x)
        y = min(o[1], y)
    }

    // Return the product of the final x and y values
    return x * y
}

// Helper function to return the minimum of two integers
func min(a, b int) int {
    if a < b {
        return a
    }

    return b
}
