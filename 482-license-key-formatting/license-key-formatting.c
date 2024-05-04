#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char * licenseKeyFormatting(char * s, int k) {
    int alphaNumer = 0;

    // Count the number of alphanumeric characters in the input string
    for (int i = 0; s[i]; i++) {
        if (isalnum(s[i])) {
            alphaNumer += 1;
        }
    }

    // Allocate memory for the result string
    char *res = (char *)malloc((alphaNumer * 2 + 1) * sizeof(char));

    int firstGroup = alphaNumer % k;
    int i = 0, j = 0; // i iterates through the input string, j iterates through the result string

    if (firstGroup) { // Create the first group
        while (s[i] && (j < firstGroup)) {
            if (s[i] != '-') {
                res[j++] = toupper(s[i]);
                alphaNumer--;
            }
            i++;
        }

        if (alphaNumer > 0)
            res[j++] = '-';
    }

    int kCount = k;
    while (s[i]) { // Build the rest of the string
        if (s[i] != '-') {
            res[j++] = toupper(s[i]);
            kCount--;
            alphaNumer--;
        }

        if ((kCount == 0) && (alphaNumer > 0)) {
            kCount = k;
            res[j++] = '-';
        }

        i++;
    }

    res[j++] = '\0'; // Null-terminate the result string
    return res;
}
