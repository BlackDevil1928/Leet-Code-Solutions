class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        # Initialize the three maximum values to negative infinity
        first, second, third = float('-inf'), float('-inf'), float('-inf')

        # Iterate through each number in the list
        for num in nums:
            # If the number is greater than the current first maximum,
            # update the first, second, and third maximum values accordingly
            if num > first:
                first, second, third = num, first, second
            # If the number is not greater than the first maximum but is greater than the second maximum,
            # update the second and third maximum values accordingly
            elif first > num > second:
                second, third = num, second
            # If the number is not greater than the first or second maximum but is greater than the third maximum,
            # update the third maximum value accordingly
            elif second > num > third:
                third = num

        # If the third maximum value is not negative infinity, return it; otherwise, return the first maximum value
        if third != float('-inf'):
            return third
        else:
            return first
