public class Solution {
    public string ToGoatLatin(string sentence) {
        // Split the input sentence into words
        string[] words = sentence.Split(' ');
        // Initialize an array to store the transformed words
        string[] transformedWords = new string[words.Length];
        // Initialize a set of vowels for reference
        var vowels = new HashSet<char>() { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

        // Iterate through each word in the input sentence
        for (int i = 0; i < words.Length; i++)
        {
            // Transform the word using the Helper method
            transformedWords[i] = Helper(words[i], i + 1, vowels);
        }

        // Join the transformed words into a single string
        string result = string.Join(" ", transformedWords);
        return result;
    }

    // Helper method to transform a single word
    string Helper(string word, int count, HashSet<char> vowels)
    {
        var sb = new StringBuilder();
        // Check if the first letter of the word is a vowel
        if (vowels.Contains(word[0]))
            sb.Append(word);
        else
        {
            // If the first letter is not a vowel, move it to the end of the word
            sb.Append(word.Substring(1));
            sb.Append(word[0]);
        }
        // Add "ma" to the end of the word
        sb.Append("ma");
        // Add 'a' repeated count times to the end of the word
        sb.Append('a', count);
        return sb.ToString();
    }
}
