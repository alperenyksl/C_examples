#include <stdio.h>
#include <ctype.h>

int countWord(const char *str, char let) {
    int count = 0;
    int is_word = 0; // flag to track if a word is being read
    while (*str != '\0') {
        if (isspace(*str)) { // if space is encountered, reset the flag
            is_word = 0;
        } else if (!is_word) { // if not in a word, check if the current letter is the one we are looking for
            if (tolower(*str) == tolower(let)) {
                count++;
            }
            is_word = 1; // set the flag as a word is being read
        }
        str++;
    }
    return count;
}

int main() {
    char sentence[100];
    char letter;
    int count;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    printf("Enter a letter: ");
    scanf("%c", &letter);

    count = countWord(sentence, letter);

    printf("Number of words starting with %c: %d\n", letter, count);

    return 0;
}

