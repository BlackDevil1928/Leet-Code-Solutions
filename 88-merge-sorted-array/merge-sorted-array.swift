class Solution {
    func merge(_ nums1: inout [Int], _ m: Int, _ nums2: [Int], _ n: Int) {
        var firstIndex: Int = 0
        var secondIndex: Int = 0
        var result: [Int] = []

        // Merge the two arrays by comparing elements
        while firstIndex < m && secondIndex < n {
            if nums1[firstIndex] <= nums2[secondIndex] {
                result.append(nums1[firstIndex])
                firstIndex += 1
            } else {
                result.append(nums2[secondIndex])
                secondIndex += 1
            }
        }

        // Append remaining elements from nums1
        while firstIndex < m {
            result.append(nums1[firstIndex])
            firstIndex += 1
        }

        // Append remaining elements from nums2
        while secondIndex < n {
            result.append(nums2[secondIndex])
            secondIndex += 1
        }
        
        // Update nums1 with the merged result
        nums1 = result
    }
}
