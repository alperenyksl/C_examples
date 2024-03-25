#include <stdio.h>
#include <ctype.h>

void countDULA(const char *str, int *digits, int *upper, int *lower, int *total_alpha) {
    while (*str != '\0') {
        if (isdigit(*str)) {
            (*digits)++;
            (*total_alpha)++;
        } else if (isupper(*str)) {
            (*upper)++;
            (*total_alpha)++;
        } else if (islower(*str)) {
            (*lower)++;
            (*total_alpha)++;
        }
        str++;
    }
}

int main() {
    char sentence[100];
    int digits = 0;
    int upper = 0;
    int lower = 0;
    int total_alpha = 0;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    countDULA(sentence, &digits, &upper, &lower, &total_alpha);

    printf("Number of digits: %d\n", digits);
    printf("Number of uppercase letters: %d\n", upper);
    printf("Number of lowercase letters: %d\n", lower);
    printf("Total number of alphabet letters: %d\n", total_alpha);

    return 0;
}
