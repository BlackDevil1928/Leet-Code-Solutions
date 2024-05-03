func wordPattern(pattern string, s string) bool {
    // Split the input string by spaces
    splitString := strings.Split(s, " ")

    // If the lengths of the pattern and split string are different, return false
    if len(pattern) != len(splitString) {
        return false
    }

    // Maps to store the mapping between characters in the pattern and words in the string
    patternMap := make(map[byte]string)
    wordMap := make(map[string]byte)

    // Iterate over the pattern and split string
    for i := 0; i < len(pattern); i++ {
        // Check if the current character in the pattern already has a mapping
        if val, ok := patternMap[pattern[i]]; ok {
            // If it does, check if the mapping is correct
            if val != splitString[i] {
                return false
            }
        } else {
            // If it doesn't, create a new mapping
            patternMap[pattern[i]] = splitString[i]
        }

        // Check if the current word in the split string already has a mapping
        if val, ok := wordMap[splitString[i]]; ok {
            // If it does, check if the mapping is correct
            if val != pattern[i] {
                return false
            }
        } else {
            // If it doesn't, create a new mapping
            wordMap[splitString[i]] = pattern[i]
        }
    }

    // If all mappings are correct, return true
    return true
}
