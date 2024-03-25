#include <stdio.h>

void countChars(char sentence[], int *numDigits, int *numUppercase, int *numLowercase, int *numAlphabets) {
    *numDigits = 0;
    *numUppercase = 0;
    *numLowercase = 0;
    *numAlphabets = 0;
    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] >= '0' && sentence[i] <= '9') {
            (*numDigits)++;
            (*numAlphabets)++;
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            (*numUppercase)++;
            (*numAlphabets)++;
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            (*numLowercase)++;
            (*numAlphabets)++;
        }
        i++;
    }
}

int main() {
    char sentence[100];
    int numDigits, numUppercase, numLowercase, numAlphabets;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    countChars(sentence, &numDigits, &numUppercase, &numLowercase, &numAlphabets);

    printf("Number of digits: %d\n", numDigits);
    printf("Number of uppercase letters: %d\n", numUppercase);
    printf("Number of lowercase letters: %d\n", numLowercase);
    printf("Total number of alphabet letters: %d\n", numAlphabets);

    return 0;
}

