#include <stdio.h>
//klavyeden girilen cümlenin kelime sayisi.
int kelimesayisi(char *str)
{
    int kelime=1;
    if (str[0] != ' ')
        kelime = 1;
        for (int i = 0; str[i] != '\0' && i < 255; i++) 
        {
        if (str[i] == ' ' && str[i + 1] != ' ')
            kelime++;
        }
    return kelime;
}
int main() {
    char str[256];

    printf("Please enter a sentence(at most 255 characters):");
    fgets(str, sizeof(str), stdin);

    int kelimeSay = kelimesayisi(str);
    printf("Number of words in the entered string: %d\n", kelimeSay);

    return 0;
}
