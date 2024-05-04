public class Solution
{
    public bool DetectCapitalUse(string word)
    {
        // If the word has only one character, it always follows the capitalization rule
        if (word.Length == 1) return true;

        // If the first character is lowercase, all other characters must also be lowercase
        if (char.IsLower(word[0]))
        {
            for (int i = 1; i < word.Length; i++)
            {
                if (char.IsUpper(word[i]))
                {
                    return false;
                }
            }

            return true;
        }

        // If the first character is uppercase, the rest of the characters must either all be uppercase or all be lowercase
        bool isUpper = char.IsUpper(word[1]);

        for (int i = 2; i < word.Length; i++)
        {
            if (!char.IsUpper(word[i]) == isUpper)
            {
                return false;
            }
        }

        return true;
    }
}
