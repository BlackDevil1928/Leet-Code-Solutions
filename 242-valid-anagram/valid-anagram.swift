class Solution {
    func isAnagram(_ s: String, _ t: String) -> Bool {
        // Check if the lengths of the two strings are equal
        guard s.count == t.count else { return false }

        // Create a dictionary to store the character counts of string s
        var charCountMap = Dictionary(s.map {($0, 1)}, uniquingKeysWith: +)

        // Iterate over each character in string t
        for char in t {
            // If the character exists in the map, decrement its count
            if let count = charCountMap[char], count > 1 {
                charCountMap[char] = count - 1
            }
            // If the character's count is 1, remove it from the map
            else if let count = charCountMap[char] {
                charCountMap[char] = nil
            }
            // If the character doesn't exist in the map, return false
            else {
                return false
            }
        }

        // If all characters in t were accounted for in s, return true
        return true
    }
}
