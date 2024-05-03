class Solution {
    func reverseString(_ s: inout [Character]) {
        // Initialize two pointers, one at the beginning and one at the end
        var left = 0, right = s.count - 1

        // Continue swapping characters until the two pointers meet
        while left < right {
            // Swap the characters at the left and right pointers
            var temp = s[left]
            s[left] = s[right]
            s[right] = temp
            // Move the pointers towards the center
            left += 1
            right -= 1
        }
    }
}
