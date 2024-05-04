class Solution {
    func findWords(_ words: [String]) -> [String] {
        // Define sets for each row of the keyboard
        let row1 = Set("qwertyuiop")
        let row2 = Set("asdfghjkl")
        let row3 = Set("zxcvbnm")
        
        // Function to check if a word is valid (i.e., all characters are in the same row)
        func isValid(_ word: String) -> Bool {
            let set = Set(word.lowercased())
            
            // Check if the set of characters in the word is a subset of any row
            if set.isSubset(of: row1) || set.isSubset(of: row2) || set.isSubset(of: row3) {
                return true
            }
            return false
        }

        // Filter the input array of words based on the isValid function
        return words.filter { isValid($0) }
    }
}
