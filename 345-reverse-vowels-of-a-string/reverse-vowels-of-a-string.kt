class Solution {
    fun reverseVowels(s: String): String {
        // Convert the input string to a char array
        val chars = s.toCharArray()
        // Initialize two pointers, one at the start and one at the end
        var left = 0
        var right = chars.size - 1
        // Set of vowels
        val vowels = setOf('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U')

        // Continue until the two pointers meet
        while (left < right) {
            // Move the left pointer to the next vowel (if it's not already at a vowel)
            while (left < right && chars[left] !in vowels) {
                left++
            }
            // Move the right pointer to the previous vowel (if it's not already at a vowel)
            while (left < right && chars[right] !in vowels) {
                right--
            }

            // Swap the vowels at the left and right positions
            val temp = chars[left]
            chars[left] = chars[right]
            chars[right] = temp
            // Move the pointers towards the center
            left++
            right--
        }

        // Convert the char array back to a string and return
        return String(chars)
    }
}
