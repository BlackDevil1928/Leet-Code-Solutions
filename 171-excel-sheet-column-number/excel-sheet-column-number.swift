class Solution {
    func titleToNumber(_ columnTitle: String) -> Int {
        // Map to store the integer value corresponding to each character
        let map: [Character: Int] = ["A": 1, "B": 2, "C": 3, "D": 4, "E": 5, "F": 6, "G": 7, "H": 8, "I": 9, "J": 10, "K": 11, "L": 12, "M": 13, "N": 14, "O": 15, "P": 16, "Q": 17, "R": 18, "S": 19, "T": 20, "U": 21, "V": 22, "W": 23, "X": 24, "Y": 25, "Z": 26]

        var result = 0
        var count = columnTitle.count - 1

        // Iterate over each character in the columnTitle
        for char in columnTitle {
            // Calculate the value of the current character and add it to the result
            result += (Int(pow(26, Float(count))) * map[char]!)
            count -= 1
        }

        return result
    }
}
