func containsNearbyDuplicate(nums []int, k int) bool {
    m := make(map[int]bool)
    i := 0
    j := 0

    for j < len(nums) {
        m[nums[j]] = true

        if len(m) != j - i + 1 {
            // There were duplicates in the set. For example, for a window of size 3,
            // there should be 3 elements in the map.
            // Example 1 -> {1,2,1}, len(m) = 2
            // Example 2 -> {1,2,3}, len(m) = 3
            return true
        }

        if j - i == k {
            // Max window size reached, delete the ith element from the map and move the window forward
            delete(m, nums[i])
            i++
        }

        j++
    }

    return false
}
