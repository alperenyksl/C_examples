#include <stdio.h>
#include <string.h>
void countDULA(const char *str, int *b, int *s, int *d, int *t);

int main()
{
    char string[100];
    int big=0;
    int small=0;
    int digit=0;
    int total=0;
    printf("Please enter a sentence:");
    fgets(string, sizeof(string), stdin);
    countDULA(string,&big,&small,&digit,&total);
    printf("Bigs=%d\n", big);
    printf("Smalls=%d\n", small);
    printf("Digits=%d\n", digit);
    printf("total=%d\n", total);
    return 0;
}
void countDULA(const char *str, int *b, int *s, int *d, int *t)
{
    for (int i = 0; i < strlen(str); i++) {
        if (*(str + i) >= 'a' && *(str + i) <= 'z') {
            (*s)++;
        }
        else if (*(str + i) >= 'A' && *(str + i) <= 'Z') {
            (*b)++;
        }
        else if (*(str + i) >= '0' && *(str + i) <= '9') {
            (*d)++;
        }
    }
    *t=*b+*s+*d;
}
