class Solution {
    public String reversePrefix(String word, char ch) {
        // Find the index of the first occurrence of the character ch in the word
        int firstOccurrence = word.indexOf(ch);
        
        // If ch is not found, return the original word
        if (firstOccurrence == -1) {
            return word;
        }
        
        // Create a StringBuilder with the substring from the start of the word to the first occurrence of ch, and reverse it
        StringBuilder sb = new StringBuilder(word.substring(0, firstOccurrence + 1)).reverse();
        
        // If the first occurrence of ch is not at the end of the word, append the rest of the word
        if (firstOccurrence < word.length() - 1) {
            sb.append(word.substring(firstOccurrence + 1));
        }
        
        // Convert the StringBuilder to a String and return
        return sb.toString();
    }
}
