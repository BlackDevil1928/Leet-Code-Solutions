class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        n = len(s)
        vis = [False] * n
        st = []
        for i in range(n):
            if s[i].islower():
                continue
            if s[i] == '(':
                st.append(i)
            else:
                if st:
                    st.pop()
                else:
                    vis[i] = True
        while st:
            vis[st.pop()] = True
        ans = ""
        for i in range(n):
            if not vis[i]:
                ans += s[i]
        return ans