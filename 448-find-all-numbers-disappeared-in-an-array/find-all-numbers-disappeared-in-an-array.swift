class Solution {
    func findDisappearedNumbers(_ nums: [Int]) -> [Int] {
        // Create a Set containing numbers from 1 to nums.count
        let fullSet = Set(1...nums.count)
        // Create a Set from nums, to remove duplicates
        let numsSet = Set(nums)
        // Use Set's subtracting method to find the difference between the two sets
        let missingNumbers = fullSet.subtracting(numsSet)
        // Convert the Set back to an Array and return it
        return Array(missingNumbers)
    }
}
