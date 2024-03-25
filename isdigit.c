#include <stdio.h>

int myisdigit(const char *str) {
    while (*str != '\0') {
        if (*str < '0' || *str > '9') {
            return 0; // not a digit
        }
        str++;
    }
    return 1; // all digits
}

int main() {
    char str1[] = "12345";
    char str2[] = "12a45";
    int result;

    result = myisdigit(str1);
    printf("%s is %s a digit string.\n", str1, result ? "" : "not");

    result = myisdigit(str2);
    printf("%s is %s a digit string.\n", str2, result ? "" : "not");

    return 0;
}

