public class Solution {
    public string ConvertToTitle(int columnNumber) {
        StringBuilder ans = new(); // StringBuilder to store the result

        // Continue until columnNumber is greater than 0
        while (columnNumber > 0) {
            columnNumber--; // Decrement columnNumber to handle 1-based indexing

            // Insert the character corresponding to the current digit in the result
            ans.Insert(0, (char)('A' + columnNumber % 26));

            // Divide columnNumber by 26 to move to the next digit
            columnNumber /= 26;
        }

        return ans.ToString(); // Return the result as a string
    }
}
