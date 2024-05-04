class Solution:
    def findLHS(self, nums: List[int]) -> int:
        # Initialize a dictionary to store the frequency of each number
        d, a = {}, 0
        # Iterate over the numbers in the input list
        for i in nums:
            # If the number is not in the dictionary, add it with a frequency of 1
            if i not in d: 
                d[i] = 1
            # If the number is already in the dictionary, increment its frequency
            else: 
                d[i] += 1
        # Iterate over the keys in the dictionary
        for i in d:
            # If the current number plus 1 is also in the dictionary
            if i + 1 in d.keys():
                # Update the maximum length of the harmonious subsequence if needed
                a = max(a, d[i] + d[i+1])
        # Return the maximum length of the harmonious subsequence
        return a
