class Solution:
    def maximumCandies(self, a: List[int], k: int) -> int:
        return bisect_left(range(max(a)+1),1,1,key=lambda q:sum(v//q for v in a)<k)-1