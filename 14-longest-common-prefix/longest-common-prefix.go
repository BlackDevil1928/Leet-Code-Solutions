func longestCommonPrefix(strs []string) string {
	if len(strs) == 0 {
		return ""
	}

	// Find the shortest string in the slice
	shortest := strs[0]
	for _, s := range strs[1:] {
		if len(s) < len(shortest) {
			shortest = s
		}
	}

	// Binary search for the longest common prefix
	low, high := 0, len(shortest)
	for low < high {
		mid := low + (high-low)/2
		prefix := shortest[:mid+1]
		found := true
		for _, s := range strs {
			if !strings.HasPrefix(s, prefix) {
				found = false
				break
			}
		}
		if found {
			low = mid + 1
		} else {
			high = mid
		}
	}

	return shortest[:low]
}
