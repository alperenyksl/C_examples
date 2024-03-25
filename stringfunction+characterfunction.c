#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100]; // str1 dizisinin boyutunu belirtin
    char str2[100]; // str2 dizisinin boyutunu belirtin
    char c;

    printf("Please enter the first sentence: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Please enter the second sentence: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Please enter a character for search in the first sentence: ");
    scanf(" %c", &c);

    // str1'in ilk karakterinin alfan�merik olup olmad���n� kontrol etme
    if (isalnum(str1[0])) {
        printf("okey.\n");
    } else {
        printf("�lk karakter alfan�merik de�il.\n");
        return 1; // Hata durumunda program� sonland�r
    }

    // str1 dizisini str2 dizisine kopyalama
    strcpy(str1, str2);

    // Kopyalanan diziyi ekrana yazd�rma
    printf("Copied string: %s\n", str1);

    return 0;
}
