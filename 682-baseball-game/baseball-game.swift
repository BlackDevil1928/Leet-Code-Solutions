class Solution {
    func calPoints(_ operations: [String]) -> Int {
        var scores: [Int] = [] // Array to store valid scores

        for operation in operations { // Iterate through each operation
            switch operation {
                case "+":
                    let lastScore = scores[scores.count - 1] // Get the last score
                    let scoreBeforeLast = scores[scores.count - 2] // Get the score before the last score
                    scores += [lastScore + scoreBeforeLast] // Add the sum of the last two scores to the array
                case "D":
                    let lastScore = scores.last ?? 0 // Get the last score or 0 if the array is empty
                    scores += [2 * lastScore] // Double the last score and add it to the array
                case "C":
                    scores = Array(scores[0..<scores.count-1]) // Remove the last valid score from the array
                default:
                    scores += [Int(operation) ?? 0] // Convert the operation to an integer score (or 0 if conversion fails) and add it to the array
            }
        }

        return scores.reduce(0, +) // Return the sum of all valid scores
    }
}
