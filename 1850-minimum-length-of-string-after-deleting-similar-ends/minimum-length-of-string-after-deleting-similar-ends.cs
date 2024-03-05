public class Solution {
    public int MinimumLength(string s) {
        int l = 0, r = s.Length - 1;
        while (l < r && s[l] == s[r]) {
            char ch = s[l];
            while (l <= r && s[l] == ch) l++;
            while (l <= r && s[r] == ch) r--;
        }
        return r - l + 1;
    }
}