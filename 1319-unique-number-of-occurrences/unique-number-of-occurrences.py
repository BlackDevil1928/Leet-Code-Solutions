class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        return reduce(eq,map(len,map(set,zip(*Counter(arr).items()))))