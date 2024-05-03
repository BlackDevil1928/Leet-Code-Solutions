func summaryRanges(nums []int) []string {
    // Initialize an empty slice to store the result
    resSlice := []string{}

    // Check if the input slice is empty
    if len(nums) == 0 {
        return resSlice
    }

    // Initialize variables to track the start and previous values
    start := nums[0]
    prev := nums[0]

    // Iterate over the numbers in the input slice starting from the second element
    for _, val := range nums[1:] {
        // If the current value is consecutive to the previous value, update the previous value
        if val == prev+1 {
            prev = val
        } else {
            // If the current value is not consecutive, add the range to the result slice
            if start != prev {
                resSlice = append(resSlice, fmt.Sprintf("%d->%d", start, prev))
            } else {
                resSlice = append(resSlice, fmt.Sprintf("%d", start))
            }
            // Update the start and previous values to the current value
            start = val
            prev = start
        }
    }

    // Add the last range to the result slice
    if start != prev {
        resSlice = append(resSlice, fmt.Sprintf("%d->%d", start, prev))
    } else {
        resSlice = append(resSlice, fmt.Sprintf("%d", start))
    }

    return resSlice
}
