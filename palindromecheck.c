#include <stdio.h>
#include <string.h>

int main() {
    char str[30];
    char *start;
    char *end; 

    printf("Please enter the word you want to find out whether it is a palindrome or not: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    start = str;
    end = str + strlen(str) - 1;

    int palindrome = 1;

    // Karakterlerin kar��la�t�r�lmas�
    while (start < end) {
        if (*start != *end) {
            palindrome = 0; // Palindrom de�il
            break;
        }
        start++;
        end--;
    }

    // Sonucun yazd�r�lmas�
    if (palindrome)
        printf("The entered word is a palindrome.\n");
    else
        printf("The entered word is not a palindrome.\n");

    return 0;
}
