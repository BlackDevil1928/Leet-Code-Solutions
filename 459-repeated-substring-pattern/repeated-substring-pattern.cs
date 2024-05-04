public class Solution {
    public bool RepeatedSubstringPattern(string s) {
        int l = s.Length; // Length of the input string
        int startIndex = s.Length / 2; // Starting index for checking possible substrings
        Dictionary<int, int> possibleLengths = new Dictionary<int, int>(); // Dictionary to store possible lengths of substrings
        
        // Find all possible lengths of substrings that could repeat to form the input string
        while (startIndex >= 1) {
            if (l % startIndex == 0) {
                // If the length of the input string is divisible by the current start index,
                // it is a possible length for repeating substrings
                possibleLengths[startIndex] = l / startIndex;
            }
            startIndex--;
        }
        
        // Check each possible length of substring
        foreach (var possibleLength in possibleLengths) {
            StringBuilder sb = new StringBuilder();
            string x = s.Substring(0, possibleLength.Key); // Extract the possible substring
            
            // Repeat the substring to match the length of the input string
            for (int i = 0; i < possibleLength.Value; i++) {
                sb.Append(x);
            }
            
            // If the repeated substring matches the input string, return true
            if (s == sb.ToString()) {
                return true;
            }
        }
        
        // If no repeated substring matches the input string, return false
        return false;
    }
}
