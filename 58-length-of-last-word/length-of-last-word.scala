object Solution {
    def lengthOfLastWord(s: String): Int = {
        // Split the input string by spaces
        val stringToArray = s.split(" ")
        // Get the index of the last element in the array
        val arrayLength = stringToArray.length - 1
        // Return the length of the last word
        stringToArray(arrayLength).length
    }
}
