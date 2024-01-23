public class Solution {
    public int MaxLength(IList<string> arr) {
        List<int> uniqueMasks = new List<int> { 0 };
        int maxLength = 0;

        foreach (string word in arr) {
            int mask = 0;
            bool isUnique = true;

            foreach (char c in word) {
                int charMask = 1 << (c - 'a');
                if ((mask & charMask) > 0) {
                    isUnique = false;
                    break;
                }
                mask |= charMask;
            }

            if (isUnique) {
                List<int> newMasks = new List<int>();
                foreach (int existingMask in uniqueMasks) {
                    if ((existingMask & mask) == 0) {
                        int combinedMask = existingMask | mask;
                        newMasks.Add(combinedMask);
                        maxLength = Math.Max(maxLength, CountSetBits(combinedMask));
                    }
                }
                uniqueMasks.AddRange(newMasks);
            }
        }

        return maxLength;
    }

    private int CountSetBits(int n) {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
}