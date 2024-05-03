// longestPalindrome finds the length of the longest palindrome that can be built with the characters in a string.
func longestPalindrome(s string) int {
    // If the input string is empty, return 0.
	if len(s) == 0 {
		return 0
	}
    // If the input string has only one character, return 1.
	if len(s) == 1 {
		return 1
	}

    // Initialize a map to store the count of each character in the string.
	m := map[byte]int{}
    // Initialize a variable to store the length of the palindrome.
	lenghtOfThePalindrome := 0
    // Initialize a variable to count the number of characters with odd counts.
	oddCount := 0

    // Count the occurrences of each character in the string.
	for i := 0; i < len(s); i++ {
		m[s[i]]++
	}

    // Iterate over the counts in the map.
	for _, val := range m {
        // Add the count to the length of the palindrome.
		lenghtOfThePalindrome += val
        // If the count is odd, increment the odd count.
		if val%2 != 0 {
			oddCount += 1
		}
	}

    // If there are no characters with odd counts, return the length of the palindrome.
	if oddCount == 0 {
		return lenghtOfThePalindrome
	}

    // If there are characters with odd counts, return the length of the palindrome plus one (for the center character) minus the number of characters with odd counts.
	return lenghtOfThePalindrome + 1 - oddCount
}
