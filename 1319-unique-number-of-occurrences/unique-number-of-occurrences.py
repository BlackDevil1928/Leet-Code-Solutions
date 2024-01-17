class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        return reduce(eq,Counter(Counter(arr).values()).values(),1)