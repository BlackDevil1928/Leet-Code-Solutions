class Solution {
    func hasAlternatingBits(_ n: Int) -> Bool {
        let arr = Array(String(n, radix: 2)) // Convert integer to binary string and then to an array of characters
        for i in 1..<arr.count { // Iterate over the array starting from index 1
            if arr[i - 1] == arr[i] { // Check if the current character is the same as the previous character
                return false // If adjacent bits are the same, return false
            }
        }
        return true // If all adjacent bits are alternating, return true
    }
}
