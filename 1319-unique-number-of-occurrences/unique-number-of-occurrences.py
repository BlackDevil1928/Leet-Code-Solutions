class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        return (lambda f:len(f)==len(set(f)))(Counter(arr).values())