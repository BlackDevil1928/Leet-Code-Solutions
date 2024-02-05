class Solution:
    def firstUniqChar(self, s: str) -> int:
        freq_dict = {}
        
        # Count character frequencies
        for char in s:
            freq_dict[char] = freq_dict.get(char, 0) + 1
        
        # Find the first unique character
        for i, char in enumerate(s):
            if freq_dict[char] == 1:
                return i
        
        # If no unique character is found
        return -1