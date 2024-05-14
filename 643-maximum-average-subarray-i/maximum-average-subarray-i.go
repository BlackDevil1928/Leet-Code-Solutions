// findMaxAverage finds the maximum average of subarrays of length k in the given array nums.
func findMaxAverage(nums []int, k int) float64 {
    // If the length of nums is less than k, return 0.
	if len(nums) < k {
		return 0
	}

    // Initialize sumMax to store the maximum sum of subarrays of length k.
	sumMax := 0
    // Calculate the sum of the first k elements in nums.
	for i := 0; i < k; i += 1 {
		sumMax += nums[i]
	}

    // Iterate through the array nums starting from index k.
	for i, sum := k, sumMax; i < len(nums); i += 1 {
        // Update the sum by adding the current element and subtracting the element k positions back.
		sum += nums[i] - nums[i-k]
        // Update sumMax to store the maximum sum found so far.
		sumMax = max(sumMax, sum)
	}

    // Return the average of the maximum sum found.
	return average(sumMax, k)
}

// average calculates the average of a sum and a given divisor k.
func average(sum, k int) float64 {
	return float64(sum) / float64(k)
}

