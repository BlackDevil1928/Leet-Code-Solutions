class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        return len(set(map(len,map(set,zip(*Counter(arr).items())))))==1