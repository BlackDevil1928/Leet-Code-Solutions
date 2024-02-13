#pragma GCC optimize("O3", "unroll-loops")
char* firstPalindrome(char** words, int wordsSize) {
    for (register int i=0; i<wordsSize; i++){
        bool isPal=1;
        char* s=words[i];
        for(register int l=0, r=strlen(s)-1; isPal&& l<r; l++, r--){
            isPal=(s[l]==s[r]);
        }
        if (isPal) return s;
    }
    return "";
}