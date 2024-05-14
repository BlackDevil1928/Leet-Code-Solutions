class Solution(object):
    def search(self, nums, target):
        """
        Search for a target in a sorted array using binary search.

        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        # Initialize left and right pointers
        left = 0
        right = len(nums) - 1

        # Continue searching while the left pointer is less than or equal to the right pointer
        while left <= right:
            # Calculate the middle index
            mid = (left + right) // 2

            # If the middle element is equal to the target, return the index
            if nums[mid] == target:
                return mid
            # If the middle element is less than the target, update the left pointer
            elif nums[mid] < target:
                left = mid + 1
            # If the middle element is greater than the target, update the right pointer
            else:
                right = mid - 1

        # If the target is not found, return -1
        return -1
