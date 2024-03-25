#include <stdio.h>
#include <ctype.h>
int mystrcmp(const char* s1, const char* s2);

int main() {

    char sent1[100];
	char sent2[100];

    printf("Enter 1st sentence:");
    fgets(sent1, 100, stdin);
    printf("Enter 2nd sentence:");
    fgets(sent2, 100, stdin);

    printf("mystrcmp function returns %d", mystrcmp(sent1, sent2));

    return 0;
}

int mystrcmp(const char* s1, const char* s2) {

    int i=0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (toupper(s1[i]) != toupper(s2[i]))
            return -1;
        i++;
    }
    return 0;
}
