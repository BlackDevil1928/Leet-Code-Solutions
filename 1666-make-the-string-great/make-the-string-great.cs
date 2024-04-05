using System.Text;

public class Solution {
    public string MakeGood(string s) {
        StringBuilder sb = new StringBuilder(s);
        int flag = 0;
        while (flag == 0 && sb.Length > 0) {
            flag = 1;
            for (int i = 0; i < sb.Length - 1; i++) {
                if (IsGreat(sb, i)) {
                    sb.Remove(i, 2);
                    flag = 0;
                }
            }
        }
        return sb.ToString();
    }

    public bool IsGreat(StringBuilder sb, int i) {
        return (int)sb[i] == (int)sb[i + 1] + 32 || (int)sb[i] == (int)sb[i + 1] - 32;
    }
}